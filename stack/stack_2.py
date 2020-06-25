class Stack:

    def __init__(self):
        self.stack = []
    
    def push(self, item):
        self.stack.insert(0, item)
    
    def pop(self):
        return self.stack.pop(0)
    
    def is_empty(self):
        self.stack.clear()
        return self.stack

    def peek(self):
        return self.stack[0]
    
    def size(self):
        return len(self.stack)
    
    def show(self):
        return self.stack

if __name__ == "__main__":
    s = Stack()
    s.push(8)
    print(s.show())
    s.push(10)
    print(s.show())
    s.push(12)
    print(s.show())
    s.push(30)
    print(s.show())
    s.pop()
    print(s.show())
    