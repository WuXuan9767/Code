from typing import List
from fastapi import Depends, FastAPI, HTTPException, status
from sqlalchemy.orm import Session
from fastapi.security import OAuth2PasswordBearer, OAuth2PasswordRequestForm
import crud, models, schemas
from database import SessionLocal, engine, Base
from datetime import datetime, timedelta, timezone
from security import create_access_token
from jose import JWTError, jwt
from fastapi.security import OAuth2PasswordBearer
Base.metadata.create_all(bind=engine)

app = FastAPI()
SECRET_KEY = "c2f4a514ae8e6fb0875ebed0633174be61c60f978a69d4b165a9c8eccc5f917a"
ALGORITHM = "HS256"
ACCESS_TOKEN_EXPIRE_MINUTES = 9999
oauth2_scheme = OAuth2PasswordBearer(tokenUrl="token")
# Dependency
def get_db():
    db = SessionLocal()
    try:
        yield db
    finally:
        db.close()

async def get_current_user(db: Session = Depends(get_db), token: str = Depends(oauth2_scheme)):
    credentials_exception = HTTPException(
        status_code=status.HTTP_401_UNAUTHORIZED,
        detail="Could not validate credentials",
        headers={"WWW-Authenticate": "Bearer"},
    )
    try:
        payload = jwt.decode(token, SECRET_KEY, algorithms=[ALGORITHM])
        username: str = payload.get("sub")
        if username is None:
            raise credentials_exception
        token = schemas.Token(username=username)
    except JWTError:
        raise credentials_exception
    user = crud.get_user(db, username=token.username)
    if user is None:
        raise credentials_exception
    return  user

async def get_current_active_user(current_user:schemas.User = Depends(get_current_user)):
    if not current_user.is_active:
        raise HTTPException(status_code=400, detail="Inactive user")
    return current_user

@app.post("/users/",summary='用户注册', response_model=schemas.User)
def create_user(user: schemas.UserCreate, db: Session = Depends(get_db)):
    db_user = crud.get_user(db, username=user.username)
    if db_user:
        raise HTTPException(status_code=400, detail="Username already registered")
    return crud.create_user(db=db, user=user)

@app.post("/login/", summary='用户登录',response_model=schemas.Token)
async def user_login(form_data: OAuth2PasswordRequestForm = Depends(), db: Session = Depends(get_db)):
    user = crud.authenticate_user(db, form_data.username, form_data.password)
    if not user:
        raise HTTPException(
            status_code=status.HTTP_401_UNAUTHORIZED,
            detail="Incorrect username or password",
            headers={"WWW-Authenticate": "Bearer"},
        )
    access_token_expires = timedelta(minutes=ACCESS_TOKEN_EXPIRE_MINUTES)
    access_token = create_access_token(
        data={"sub": user.username}, expires_delta=access_token_expires
    )
    return schemas.Token(access_token=access_token, token_type="bearer")



@app.get("/users/", response_model=List[schemas.User],summary='查看当前存在的用户')
def read_users(skip: int = 0, limit: int = 100, db: Session = Depends(get_db)):
    users = crud.get_users(db, skip=skip, limit=limit)
    return users

@app.get("/users/me/all/", response_model=schemas.User,summary='查看自己发布的帖子和回复')
async def read_users_all(db: Session = Depends(get_db), current_user: schemas.User = Depends(get_current_active_user)):
    db_user = crud.get_user_from_id(db, id=current_user.id)
    if db_user is None:
        raise HTTPException(status_code=404, detail="User not found")
    return db_user

@app.get("/users/me/posts/", response_model=List[schemas.Post],summary='查看自己发布的帖子')
async def read_users_posts(db: Session = Depends(get_db), current_user: schemas.User = Depends(get_current_active_user)):
    posts = crud.get_posts_from_user_id(db, id=current_user.id)
    return posts

@app.get("/users/me/replies/", response_model=List[schemas.Reply],summary='查看自己发布的回复')
async def read_users_posts(db: Session = Depends(get_db), current_user: schemas.User = Depends(get_current_active_user)):
    replies = crud.get_replies_from_user_id(db, id=current_user.id)
    return replies

@app.get("/users/posts/{post_id}", response_model=schemas.Post)
def read_user(post_id: int, db: Session = Depends(get_db)):
    db_post = crud.get_post_from_id(db, id=post_id)
    if db_post is None:
        raise HTTPException(status_code=404, detail="Post not found")
    return db_post


@app.get("/posts/", response_model=List[schemas.Post],summary='查看指定帖子')
def read_posts(skip: int = 0, limit: int = 100, db: Session = Depends(get_db)):
    posts = crud.get_posts(db, skip=skip, limit=limit)
    return posts

@app.post("/users/me/create_post/", response_model=schemas.Post,summary='发布帖子')
def create_post_for_user(
    post: schemas.PostCreate,
    db: Session = Depends(get_db),
    current_user: schemas.User = Depends(get_current_active_user)
):
    return crud.create_user_post(db=db, post=post, user_id=current_user.id)


@app.post("/users/me/create_reply/", response_model=schemas.Reply,summary='写回复')
def create_reply_for_post(
    post_id: int,
    reply: schemas.ReplyCreate,
    db: Session = Depends(get_db),
    current_user: schemas.User = Depends(get_current_active_user)

):  
    post=crud.get_post_from_id(db=db,id=post_id)
    if post is None:
        raise HTTPException(status_code=404, detail="Post not found")
    return crud.create_post_reply(db=db, reply=reply, post_id=post_id, user_id=current_user.id)

@app.get("/users/me/delete_post/", summary='删除帖子')
def delete_post(
    post_id:int,
    db: Session = Depends(get_db),
    current_user: schemas.User = Depends(get_current_active_user)
):  
    post=crud.get_post_from_id(db=db,id=post_id)
    if post is None:
        raise HTTPException(status_code=404, detail="Post not found")
    if crud.get_user_id_from_post_id(db=db, id=post_id) !=current_user.id:
        raise HTTPException(status_code=404, detail="No permission")
    crud.delete_post_from_id(db=db,id=post_id)
    raise HTTPException(status_code=200, detail="Delete successful")


@app.get("/users/me/delete_reply/", summary='删除回复')
def delete_reply(
    reply_id:int,
    db: Session = Depends(get_db),
    current_user: schemas.User = Depends(get_current_active_user)
):  
    
    reply=crud.get_reply_from_id(db=db,id=reply_id)
    if reply is None:
        raise HTTPException(status_code=404, detail="Reply not found")
    if crud.get_user_id_from_reply_id(db=db, id=reply_id) !=current_user.id:
        raise HTTPException(status_code=404, detail="No permission")
    crud.delete_reply_from_id(db=db,id=reply_id)
    raise HTTPException(status_code=200, detail="Delete successful")


@app.post("/users/me/modify_post/", summary='修改帖子')
def modify_post(
    db_post: schemas.PostChange,
    db: Session = Depends(get_db),
    current_user: schemas.User = Depends(get_current_active_user)
):  
    post=crud.get_post_from_id(db=db,id=db_post.id)
    if post is None:
        raise HTTPException(status_code=404, detail="Post not found")
    if crud.get_user_id_from_post_id(db=db, id=post.id) !=current_user.id:
        raise HTTPException(status_code=404, detail="No permission")
    crud.update_post(db=db, post_id=db_post.id, new_content=db_post.content)
    raise HTTPException(status_code=200, detail="modify successful")


@app.post("/users/me/modify_reply/", summary='修改回复')
def modify_reply(
    db_reply: schemas.ReplyChange,
    db: Session = Depends(get_db),
    current_user: schemas.User = Depends(get_current_active_user)
):  
    reply=crud.get_reply_from_id(db=db,id=db_reply.id)
    if reply is None:
        raise HTTPException(status_code=404, detail="Reply not found")
    if crud.get_user_id_from_reply_id(db=db, id=reply.id) !=current_user.id:
        raise HTTPException(status_code=404, detail="No permission")
    crud.update_reply(db=db,reply_id=db_reply.id,new_content=db_reply.content)
    raise HTTPException(status_code=200, detail="modify successful")
