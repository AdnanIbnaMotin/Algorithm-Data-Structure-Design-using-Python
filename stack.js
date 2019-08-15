class Stack {
    constructor() {
        this.length = 0;
        this.stack = [];
    }

    _push(value) {
        this.stack[this.length] = value;
        this.length++;
        return this.stack;
    }

    _pop() {
        if (this.length == 0) {
            return undefined;
        }
        this.length--;
        let popItem = this.stack[this.length];
        delete this.stack[this.length];
        return popItem;
    }
}

let _stack = new Stack();
console.log(_stack._push(10));
console.log(_stack._push(11));
console.log(_stack._pop());
console.log(_stack._push(9));