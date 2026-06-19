class MyQueue {
    stack<int> inStack;
    stack<int> outStack;

    void shift() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
    }

public:
    MyQueue() {
    }

    void push(int x) {
        inStack.push(x);
    }

    int pop() {
        shift();
        int val = outStack.top();
        outStack.pop();
        return val;
    }

    int peek() {
        shift();
        return outStack.top();
    }

    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};
