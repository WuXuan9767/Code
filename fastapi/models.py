from sqlalchemy import create_engine
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy import Column, Integer, String, Text, ForeignKey, Boolean
from sqlalchemy.orm import relationship
from database import Base
	
class User(Base):
    __tablename__ = "users"

    id = Column(Integer, primary_key=True, autoincrement=True)
    username = Column(String(64), nullable=False)
    hashed_password = Column(String(64), nullable=False)
    is_active = Column(Boolean, default=True)
    posts = relationship('Post', back_populates="author")
    replies = relationship('Reply', back_populates="author")


class Post(Base):
	__tablename__ = "posts"

	id = Column(Integer, primary_key=True)
	content = Column(Text)
	user_id = Column(Integer, ForeignKey('users.id'))
	author = relationship('User', back_populates="posts")
	replies = relationship('Reply', back_populates="post")

class Reply(Base):
    __tablename__ = "replies"

    id = Column(Integer, primary_key=True)
    content = Column(Text)
    user_id = Column(Integer, ForeignKey('users.id'))
    post_id = Column(Integer, ForeignKey('posts.id'))
    author = relationship('User', back_populates="replies")
    post = relationship('Post', back_populates="replies")
