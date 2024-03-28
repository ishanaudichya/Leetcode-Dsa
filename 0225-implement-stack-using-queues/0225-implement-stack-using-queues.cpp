class MyStack {
    queue<int>q1;
    queue<int>q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
        }
        swap(q1,q2);
    }
    
     int pop() {
        if(q1.empty())
        return -1;
       int ans=q1.front();
       q1.pop();
        return ans; 
        
    }
    
    int top() {
        if(!q1.empty())
        return q1.front();
        else
        return -1;
        
    }
    
    bool empty() 
    {
        if(q1.empty())
        return true;
        return false;
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */