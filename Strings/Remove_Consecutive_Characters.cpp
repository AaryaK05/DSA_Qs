//GFG 

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here
        string b;
        
        b+=S[0]; 
        for(int i=1;i<S.length();i++){
            if(S[i]==S[i-1]){
                continue;
            }else{
                b+=S[i];
            }
        }
        
        return b;
    }
};

