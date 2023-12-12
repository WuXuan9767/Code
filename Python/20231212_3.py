from flask import Flask, request, jsonify
import conf

app = Flask(__name__)
url = conf.url

@app.route('/', methods=['POST'])
def func():
    challenge = request.json.get('challenge')
    return jsonify(challenge=challenge)

if __name__ == "__main__":
    app.run(host='0.0.0.0', port=5000, debug=True)