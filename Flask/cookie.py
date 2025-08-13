from flask import Flask as f ,request,render_template,make_response
import os

mera_apk = f(__name__,template_folder=".")
@mera_apk.route('/')
def index():
    return render_template("cookie.html")

@mera_apk.route('/setcookie',methods=['POST','GET'])

def setcookie():
    if request.method == 'POST':
        user = request.form['nm']
        resp = make_response(render_template('get.html'))
        resp.set_cookie('userid',user)
        return resp
@mera_apk.route('/getcookie')
def getcookie():
    name = request.cookies.get('userid')
    return "<h1>Welcome"+ name + "</h1>"

if __name__ == '__main__':
    mera_apk.run()
