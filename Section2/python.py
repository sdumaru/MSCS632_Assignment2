def greet(name):
    hello = "Hello, "
    def say_hello():
        return hello + name
    return say_hello

greeting = greet("Sujan")
print(greeting())  # Output: Hello, Sujan

x = 10
print(type(x))  # Output: <class 'int'>
x = "ten"
print(type(x))  # Output: <class 'str'>