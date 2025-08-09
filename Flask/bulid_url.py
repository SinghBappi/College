from flask import Flask as f,redirect,url_for
mera_apk = f(__name__)

@mera_apk.route('/admin')
def hello_admin():
    return 'Hello Admin !'

@mera_apk.route('/guest/<guest>')
def guest(guest):
    return "Hello %s as a guest !"% guest

@mera_apk.route('/user/<name>')
def hello_user(name):
    if name.strip().lower()=="admin":
        return redirect(url_for('hello_admin'))
    else:
        return redirect(url_for('guest',guest=name))
    
if __name__ == '__main__':
    mera_apk.run(debug=True)

