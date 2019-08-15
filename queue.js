class Queue {
    constructor() {
        this.length = 0;
        this.queue = [];
    }

    _enqueue(value) {
        this.queue[this.length] = value;
        this.length++;

        return this.queue;
    }

    _dequeue() {
        if (this.length == 0) {
            return;
        }
        this.length--;
        let dequeueItem = this.queue.shift();
        return dequeueItem;

    }
}

let _queue = new Queue();
console.log(_queue._enqueue(10));
console.log(_queue._enqueue(1));
console.log(_queue._dequeue());
console.log(_queue._enqueue(18));