from flask import Flask, render_template, request

app = Flask(__name__) #tells Python to make an application

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/greet", methods=["POST"]) #to prevent data from showing in the URL
def greet():
    name = request.form.get("name", "world") #request.args.get for GET requests
    return render_template("greet.html", name=name)
