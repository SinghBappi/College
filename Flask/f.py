# from flask import Flask

# app = Flask(__name__)

# @app.route('/')

# def hello():
#     return 'HELLO'

# if __name__ == '__main__':
#     app.run(debug=True)
from flask import Flask as f
mera_apk = f(__name__)

@mera_apk.route('/')

def hello():
    return 'Hello Bhai'
if __name__ == '__main__':
    mera_apk.run(debug=True)