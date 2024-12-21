//GFG
class Solution {
  public:
    // Function to evaluate a postfix expression.
    int evaluatePostfix(string &s) {
        // Your code here
        
        stack<int>st;
        
        for(int i=0;i<s.length();i++){
            if(int(s[i])>=48 && int(s[i])<=57){
                int temp;
                temp=int(s[i])-int('0');
                st.push(temp);
            }
            else{
                int x=st.top();
                st.pop();
                int y=st.top();
                st.pop();
                int res;
                if(s[i]=='-'){
                    res=y-x;
                }
                else if(s[i]=='*'){
                    res=y*x;
                }
                else if(s[i]=='+'){
                    res=y+x;
                }
                else{
                    res=y/x;
                }
                // cout<<res<<"\n";
                st.push(res);
                
            }
            
        }
        // cout<<st.top()<<"\n";
        
        
        return st.top();
    }
};
