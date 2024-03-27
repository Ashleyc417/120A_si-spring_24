import time
from typing import Callable


# Function that takes in another function as parameter
# Times how long the parameter function takes
def timer(func: Callable):
    """
    Logs runtime of a function
    """

    def wrapper(*args, **kwargs):
        start = time.time()
        func(*args, **kwargs)
        end = time.time()
        print("Time elapsed: %f seconds" % (end - start))

    return wrapper


# Initialize array of 10,000 integers
arr: list[int] = []
for i in range(0, 10000):
    arr.append(i)


@timer
def test():
    for _ in arr:
        pass


@timer
def test2():
    for _ in arr:
        for _ in arr:
            pass


# Lets add these 6 lines of code + See what happens
@timer
def test3():
    for _ in arr:
        for _ in arr:
            for _ in arr:
                pass


test()
test2()
test3()

# Output:
# Time elapsed: 0.000064 seconds
# Time elapsed: 0.428595 second
