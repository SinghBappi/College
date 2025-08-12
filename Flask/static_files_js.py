from flask import Flask as f,render_template
mera_apk = f(__name__,template_folder='.',static_folder='static')
# mera_apk = f(__name__,template_folder='.',static_folder='.')
@mera_apk.route("/")
def index():
    return render_template("index.html")

if __name__ == "__main__":
    mera_apk.run(debug=True)



#     from flask import Flask, render_template

# app = Flask(
#     __name__,
#     template_folder='my_templates',   # custom folder for HTML templates
#     static_folder='assets'           # custom folder for static files
# )

# @app.route("/")
# def index():
#     return render_template("index.html")

# if __name__ == "__main__":
#     app.run(debug=True)