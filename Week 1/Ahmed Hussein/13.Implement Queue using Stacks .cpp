//
// Created by Ahmed hesen on 10/13/2024.
//

class MyQueue {
public:
    stack<int> s1,s2;
    MyQueue() {

    }

    void push(int x) {
        s1.push(x);
    }

    int pop() {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int val = s2.top();
        s2.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return val;
    }

    int peek() {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int val = s2.top();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return val;
    }

    bool empty() {
        if(s1.size())return false;
        else return true;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */