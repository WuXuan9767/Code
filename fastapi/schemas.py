from pydantic import BaseModel


class PostBase(BaseModel):
    content: str

class PostCreate(PostBase):
    pass

class Post(PostBase):
    id: int
    user_id: int
    content: str

    class Config:
        from_attributes = True

class UserBase(BaseModel):
    email: str

class UserCreate(UserBase):
    password: str

class User(UserBase):
    id: int
    is_active: bool
    posts: list[Post] = []

    class Config:
        from_attributes = True