from stack_1 import Stack

def par_checker(string):

    s = Stack()
    balanced = True
    index = 0
    while index < len(string) and balanced:
        if string[index] == "(":
            s.push(string[index])
        else:
            if s.size() < 1:
                balanced = False
            else:
                s.pop()
        
        index += 1
    
    if balanced and s.size() < 1:
        return True
    else:
        return False

print(par_checker("(((()))"))