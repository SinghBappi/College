from flask import Flask as f

mera_apk = f(__name__)

@mera_apk.route('/hello/<name>')

def hello_name (name):
    return 'Hello %s' %name

if __name__ == '__main__':
    mera_apk.run(debug=True)
