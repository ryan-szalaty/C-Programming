def check_input():
    try:
        greeting = input()
        greeting = greeting.lower()
        if greeting == "hello":
            print("$0")
        elif greeting[0] == "h":
            print("$20")
        else: 
            print("$100")
    except IndexError:
        print("You didn't even touch the keyboard!")

check_input()