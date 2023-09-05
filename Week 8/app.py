from flask import Flask, render_template, request

app = Flask(__name__) #tells Python to make an application

@app.route("/")
def index():
    name = request.args.get("name")
    return render_template("index.html", name=name)