from sqlalchemy.orm import Session,joinedload
from security import get_password_hash, verify_password
import models, schemas
from fastapi import Depends, FastAPI, HTTPException, status
from jose import JWTError, jwt
from fastapi.security import OAuth2PasswordBearer, OAuth2PasswordRequestForm
ALGORITHM = "HS256"
SECRET_KEY = "c2f4a514ae8e6fb0875ebed0633174be61c60f978a69d4b165a9c8eccc5f917a"
oauth2_scheme = OAuth2PasswordBearer(tokenUrl="token")
def get_user(db: Session, username: int):
    return  db.query(models.User).filter(models.User.username == username).first()
    
def get_user_from_id(db: Session, id: int):
    return db.query(models.User).options(joinedload(models.User.replies)).filter(models.User.id == id).first()


def get_users(db: Session, skip: int = 0, limit: int = 100):
    return db.query(models.User).offset(skip).limit(limit).all()


def create_user(db: Session, user: schemas.UserCreate):
    hashed_password = get_password_hash(user.password)
    db_user = models.User(username=user.username, hashed_password=hashed_password)
    db.add(db_user)
    db.commit()
    db.refresh(db_user)
    return db_user

def authenticate_user(db: Session, username: str, password: str):
    user = get_user(db, username)
    if not user:
        return False
    if not verify_password(password, user.hashed_password):
        return False
    return user


def get_posts(db: Session, skip: int = 0, limit: int = 100):
    return db.query(models.Post).offset(skip).limit(limit).all()

def get_post_from_id(db: Session, id: int):
    return db.query(models.Post).filter(models.Post.id == id).first()

def get_user_id_from_post_id(db: Session, id: int):
    result = db.query(models.Post.user_id).filter(models.Post.id == id).first()
    if result is not None:
        return result[0]
    else:
        return None
    
def get_replies(db: Session, skip: int = 0, limit: int = 100):
    return db.query(models.Reply).offset(skip).limit(limit).all()

def get_reply_from_id(db: Session, id: int):
    return db.query(models.Reply).filter(models.Reply.id == id).first()

def get_user_id_from_reply_id(db: Session, id: int):
    result = db.query(models.Reply.user_id).filter(models.Reply.id == id).first()
    if result is not None:
        return result[0]
    else:
        return None

def create_user_post(db: Session, post: schemas.PostCreate, user_id: int):
    db_post = models.Post(content=post.content, user_id=user_id)
    db.add(db_post)
    db.commit()
    db.refresh(db_post)
    return db_post

def create_post_reply(db: Session, reply:schemas.ReplyCreate, post_id: int, user_id: int):
    db_reply = models.Reply(content=reply.content, user_id=user_id, post_id=post_id)
    db.add(db_reply)
    db.commit()
    db.refresh(db_reply)
    return db_reply


def delete_post_from_id(db: Session, id: int):
    db_post = db.query(models.Post).filter(models.Post.id == id).first()
    db.delete(db_post)
    db.commit()
    return db_post

def delete_reply_from_id(db: Session, id: int):
    db_reply = db.query(models.Reply).filter(models.Reply.id == id).first()
    db.delete(db_reply)
    db.commit()
    return db_reply

def update_post(db: Session, post_id: int, new_content: str):    
    db_post = db.query(models.Post).filter(models.Post.id == post_id).first()
    db_post.content = new_content
    db.commit()
    db.refresh(db_post)
    return db_post


def update_reply(db: Session, reply_id: int, new_content: str):    
    db_reply = db.query(models.Reply).filter(models.Reply.id == reply_id).first()
    db_reply.content = new_content
    db.commit()
    db.refresh(db_reply)
    return db_reply

