#include <stack>

class MyQueue {
public:
    std::stack<int> s1;
    std::stack<int> s2;
    int front; // Declare 'front' as a member variable

    MyQueue() {
        front = 0; // Initialize 'front' in the constructor
    }

    void push(int x) {
        if (s1.empty()) {
            front = x;
        }
        s1.push(x);
    }

    int pop() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int popped = s2.top();
        s2.pop();
        return popped;
    }

    int peek() {
        if (!s2.empty()) {
            return s2.top();
        }
        return front;
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};