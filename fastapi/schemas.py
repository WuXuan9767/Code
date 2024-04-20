from pydantic import BaseModel
from typing import List,Union


class ReplyBase(BaseModel):
    content: str
    
    

class ReplyCreate(ReplyBase):
    pass

class ReplyChange(ReplyBase):
    id: int

class Reply(ReplyBase):
    id: int
    user_id: int
    post_id: int
    content: str

class PostBase(BaseModel):
    content: str
    

class PostCreate(PostBase):
    pass

class PostChange(PostBase):
    id: int

class Post(PostBase):
    id: int
    content: str
    user_id: int
    replies: List[Reply] = []

class UserBase(BaseModel):
    username: str

class UserCreate(UserBase):
    password: str

class User(UserBase):
    id: int
    is_active: bool
    posts: List[Post] = []
    replies: List[Reply] = []

class Token(BaseModel):
    access_token: Union[str, None] = None
    token_type: Union[str, None] = None
    username: Union[str, None] = None
