CREATE TABLE users (
    id INT AUTO_INCREMENT,
    username VARCHAR(50),
    password VARCHAR(50),
    PRIMARY KEY(id)
);

INSERT INTO users (username, password) VALUES ('zyy', 'password1');
INSERT INTO users (username, password) VALUES ('dmx', 'password2');
INSERT INTO users (username, password) VALUES ('ymt', 'password3');
