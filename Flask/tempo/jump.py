from flask import Flask as f , render_template,request
mera_apk =f(__name__,template_folder=".")
@mera_apk.route("/")
def home():
    return render_template("index.html") # we will see this cssn problem afterwards 

@mera_apk.route("/signin.html")
def sins():
    return render_template("signin.html")
# just for refeerence, not for copy


@mera_apk.route("/up",methods=["POST"])
def up():
    if request.method == 'POST':
        user = request.form["username"]
        password = request.form["password"]
        if user == "admin" and password == "admin":
            return render_template("ok.html")
if (__name__)=="__main__":
    mera_apk.run(debug=True)


