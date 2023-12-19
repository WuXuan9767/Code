FROM mariadb:latest

ADD My_Script.sh /docker-entrypoint-initdb.d

ADD My_SQL.sql /root

ENV MYSQL_ROOT_PASSWORD password1234

EXPOSE 3306

