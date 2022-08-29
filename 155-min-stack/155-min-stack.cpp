class MinStack {
public:
    stack<int> s;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        int m = INT_MAX;
        stack<int> temps;
        temps = s;
        while(!temps.empty()){
            int t = temps.top();
            m=min(t,m);
            temps.pop();
        }
        return m;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */