from flask import Flask as f , render_template,request,flash,redirect,url_for
mera_apk = f(__name__,template_folder=".")
mera_apk.secret_key='kela_123'


@mera_apk.route('/')
def index():
    return '<h2>Welcome to index page</h2>'

@mera_apk.route('/login',methods=['POST','GET'])
def  login():
    error = None
    if request.method=='POST':
        if request.form['username']!='admin' or request.form['password'] !='admin':
            error = 'Invalid username and password'
        else:
            flash('You were logined in')
        return redirect(url_for('index'))
    return(render_template('login.html',error = error))
            
if __name__ == '__main__':
    mera_apk.run(debug=True)
