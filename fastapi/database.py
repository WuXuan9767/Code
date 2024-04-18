from sqlalchemy import create_engine
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy.orm import sessionmaker, declarative_base, relationship

HOSTNAME = "127.0.0.1"
PORT = 3306
DATABASE = "fastapi"
USERNAME = "root"
PASSWORD = "159847263ZFR.zfr"
DB_URL = f"mysql+pymysql://{USERNAME}:{PASSWORD}@{HOSTNAME}:{PORT}/{DATABASE}?charset=utf8"

engine = create_engine(DB_URL)
	
Base = declarative_base()


SessionLocal = sessionmaker(autocommit=False, autoflush=False, bind=engine)

Base.metadata.create_all(engine)
