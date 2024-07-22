class MyQueue {
public:
stack<int>input;
stack<int>output;
int peekEl=-1;

    MyQueue() {
        
    }
    
    void push(int x) {
        if(input.empty()) peekEl=x;
        input.push(x);
    }
    
    int pop() {
        // amortized O(1)
        
        if(output.empty()){
            while(!input.empty()){//o(N)
                output.push(input.top());
                input.pop();
            }
        }
        int val=output.top();//O(1)
        output.pop();
        return val;
    }
    
    int peek() {
        if(output.empty()) return peekEl;
         return output.top();
    }
    
    bool empty() {
        if(input.empty() && output.empty()) return true;
        else return false;
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