from flask import Flask as f , render_template,request
mera_apk = f(__name__,template_folder=".")

@mera_apk.route('/')
def student():
    return render_template("student.html")
@mera_apk.route('/result',methods=['POST','GET'])
def result():
    if request.method== 'POST':
        result = request.form
        return render_template("result.html",result=result)
    
if __name__ == "__main__":
    mera_apk.run(debug=True)
    
    