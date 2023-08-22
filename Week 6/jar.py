class Jar:
    def __init__(self, capacity = 12):
        self._capacity = capacity
        self.contents = 0
    def __str__(self):
        return f"Jar contains {self.contents} cookies and can hold a total of {self._capacity} cookies."
    def deposit(self, cookies):
        try:
            if (self.contents + cookies <= self._capacity):
                self.contents += cookies
                return f"Jar contains {self.contents} cookie(s)."
            else:
                return "Too many cookies! Eat some first."
        except ValueError:
            return "Cookie Monster stole the jar!"
    def withdraw(self, cookies):
        try:
            if (self.contents - cookies >= 0):
                self.contents -= cookies
                return f"Jar contains {self.contents} cookie(s)."
            else:
                return "There are not enough cookies for you to take out!"
        except ValueError:
            return "The cookie jar was sent to a different dimension."
    @property
    def capacity(self):
        return self._capacity
    @property 
    def size(self):
        return self.contents
    
def main():
    jar = Jar()
    jar.deposit(10)
    jar.withdraw(3)
    print(str(jar))
main()