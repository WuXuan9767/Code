from sqlalchemy import create_engine
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy import Column, Integer, String, Text, ForeignKey, Boolean
from sqlalchemy.orm import relationship
from database import Base
	
class Users(Base):
    __tablename__ = "users"

    id = Column(Integer, primary_key=True, autoincrement=True)
    username = Column(String(64), nullable=True, index=True)
    email = Column(String(64), nullable=False, index=True)
    hashed_password = Column(String(64), nullable=False)
    is_active = Column(Boolean, default=True)
    posts = relationship('Posts',back_populates="author")

class Posts(Base):
	__tablename__ = "posts"

	id = Column(Integer, primary_key=True)
	content = Column(Text)
	user_id = Column(Integer, ForeignKey('users.id'))
	author = relationship('Users', back_populates="posts", overlaps="posts")
