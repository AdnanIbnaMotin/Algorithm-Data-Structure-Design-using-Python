class Stack:

    # Create an empty stack
    def __init__(self):
        self.stack = []
    
    # Add an element of the stack
    def push(self, item):
        self.stack.append(item)
    
    # Delete and return the top element of the stack
    def pop(self):
        return self.stack.pop()
    
    # Empty the stack
    def is_empty(self):
        self.stack.clear()
        return self.stack
    
    # Return top element of the stack
    def peek(self):
        return self.stack[len(self.stack) -1]
    
    # Return the length of the stack
    def size(self):
        return len(self.stack)
    
    # Return the full stack
    def show(self):
        return self.stack



if __name__ == "__main__":
    s = Stack()
    s.push(2)
    s.push(10)
    s.push(20)
    s.push(100)
    print(s.show())
