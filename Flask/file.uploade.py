from flask import Flask as f,render_template,request
from werkzeug.utils import secure_filename

mera_apk = f(__name__,template_folder=".")
@mera_apk.route('/upload')
def uploadfile():
    return render_template('upload.html')


@mera_apk.route('/uploader',methods=['POST'])
def uploadf():
    if request.method == 'POST':
        t = request.files['files']
        t.save(secure_filename(t.filename))
        return 'File uploaded successfully !'
    
    
if __name__ == "__main__":
    mera_apk.run(debug=True)
