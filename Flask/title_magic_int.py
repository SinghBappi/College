from flask import Flask as f
mera_apk = f(__name__)
@mera_apk.route('/blog/<int:postid>')
def show_blog(postid):
    return 'Blog Number is :%d' %postid
@mera_apk.route('/rev/<float:revno>')
def revision(revno):
    return 'Revision Number is %f' %revno

if __name__ =='__main__':
    mera_apk.run(debug=True)

