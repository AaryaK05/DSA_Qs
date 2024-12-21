//Leetcode - 225
class MyStack {
public:
    queue<int>q1;
    queue<int>q2;
    
    MyStack() {
    }
    
    void push(int x) {
        if(q1.empty()){
            q1.push(x);
        }
        else{
            q2=q1;
            queue<int>emptyq;
            swap(q1,emptyq);
            q1.push(x);
            while (!q2.empty()) {
                q1.push(q2.front()); 
                q2.pop();            
            }
        }
    }
    
    int pop() {
        int result = q1.front();
        q1.pop();

        return result;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
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
