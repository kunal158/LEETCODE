class MyStack {
public:
    /** Initialize your data structure here. */
     queue<int>q;
    MyStack() {
       
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q.push(x);
        
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int ans;
        if(q.empty())
            return -1;
        for(int i=0;i<q.size()-1;i++) // if there are 3 element then we pop 2 elemenr
        {
             ans=q.front();
            q.pop();  //pop two element
            q.push(ans); //angain push it
        }
        ans=q.front();
        q.pop();
       return ans;
    }
    
    /** Get the top element. */
    int top() {
        int ans;
        if(q.empty())
            return -1;
        for(int i=0;i<q.size();i++)
        {
             ans=q.front();
            q.pop();
            q.push(ans);
        }
        
       return ans;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
       return q.empty();
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
