mariadb -uroot -ppassword1234 <<EOF


CREATE DATABASE USER;

USE USER;

SOURCE /root/My_SQL.sql;

EOF

tail -f /dev/null
