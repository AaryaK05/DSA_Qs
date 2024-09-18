//Leetcode Q-125

class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        string b;


        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                continue;
            }
            if(int(s[i])>=65 &&int(s[i])<=90 || int(s[i])>=97 && int(s[i])<=122 || int(s[i])>=48 && int(s[i])<=57){
                a+=tolower(s[i]);
            }
        }

        for(int j=a.length()-1;j>=0;j--){
            b+=a[j];
        }
 
        if(a==b){
            return true;
        }else{
            return false;
        }
        
    }
};
