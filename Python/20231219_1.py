from flask import Flask, request
import mariadb

app = Flask(__name__)
conn = mariadb.connect(
    user='root',
    password='159847263ZFR.zfr',
    host='localhost',
    port=3306,
    database='USER')

@app.route('/register', methods=['GET'])
def register():
    username = request.args.get('username')
    password = request.args.get('password')
    cursor = conn.cursor()
    cursor.execute("SELECT * FROM users WHERE username=%s", (username,))
    user = cursor.fetchone()
    if user:
        return '用户名已存在'
    
    else:
        cursor.execute("INSERT INTO users (username, password) VALUES (%s, %s)", (username, password))
        conn.commit()
        return '注册成功'
        
        

@app.route('/login', methods=['GET'])
def login():
    username = request.args.get('username')
    password = request.args.get('password')
    cursor = conn.cursor()
    cursor.execute("SELECT * FROM users WHERE username=%s AND password=%s", (username, password))
    user = cursor.fetchone()
    if user:
        return '登入成功'
    else:
        return '用户名或密码错误'

if __name__ == "__main__":
    app.run(host='0.0.0.0', port=5000, debug=True)
