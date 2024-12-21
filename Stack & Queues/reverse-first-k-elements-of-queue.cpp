//GFG
class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        stack<int>st;
        queue<int>q1;
        while(k>0){
            st.push(q.front());
            q.pop();
            k--;
        }
        while(!st.empty()){
            q1.push(st.top());
            st.pop();
        }
        
        while(!q.empty()){
            q1.push(q.front());
            q.pop();
        }
        
        return q1;
    }
};
