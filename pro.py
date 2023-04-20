# Implementation of the participation lab in Python

# This inherits from the built-in Exception class
class NegativeNumberException(Exception):
    # In Python we can't have empty code blocks so you write "pass" which does literally nothing
    pass


class Rectangle:
    # Constructor. In Python we use "self" instead of "this"
    def __init__(self, len, wid):
        self.setLength(len)
        self.setWidth(wid)

    # Technically there is no need for getters and setters in Python because all member variables are public
    def getLength(self):
        return self.length

    def getWidth(self):
        return self.width

    def setLength(self, len):
        if len < 0:
            raise NegativeNumberException("Length cannot be negative")
        else:
            self.length = len

    def setWidth(self, wid):
        if wid < 0:
            raise NegativeNumberException("Width cannot be negative")
        else:
            self.width = wid

    def area(self):
        return self.length * self.width

    # This overrides what happens when we try to turn Rectangle into a string
    # The print() function interally converts Rectangle to a string, so this will get called
    def __str__(self):
        return "Length: " + str(self.length) + " Width: " + str(self.width)


# This is the equivalent of the main() function in C++ but it's not required
if __name__ == "__main__":
    r1 = Rectangle(2.2, 3.3)
    print("r1", r1)

    r2 = Rectangle(4, 5)
    print("r2", r2)

    # Instead of try/catch it's try/except
    try:
        r3 = Rectangle(-5, -7)
        print("r3", r3)
    except NegativeNumberException as e:
        print("Exception:", e)
