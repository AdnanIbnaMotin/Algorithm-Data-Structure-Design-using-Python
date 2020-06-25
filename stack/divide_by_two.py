"""
"Divide by Two" is an algorithm which is used to convert a decimal number into binary using stack data structure.
The idea behind the "Devide by Two" algorithm is to divide the number each time by 2 and push the reminder into the
stack and the reverse order will be the binary number of that decimal number
"""
from stack_1 import Stack

def devideByTwo(number):

    s = Stack()
    while number != 0:
        s.push(number % 2)
        number //= 2

    numberToStr = ""
    while s.size() > 0:
       numberToStr += str(s.pop()) 

    return numberToStr

print(devideByTwo(10))