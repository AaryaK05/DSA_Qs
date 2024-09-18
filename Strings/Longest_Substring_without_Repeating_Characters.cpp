//Leetcode 3
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,bool>mp;
        int i=0,j=0;
        int max=INT_MIN;
        int curr=0;
        int temp=0;
        
        if(s.length()==0 || s.length()==1){
            return s.length();
        }
        

        while(i<s.length()-1){
            int temp=i;
            if(mp.find(s[j])!=mp.end()){
                j=temp+1;
                i=i+1;
                mp.clear();
                if(curr>max){
                    max=curr;
                }
                curr=0;
                continue;
            }
            mp[s[j]]=true;
            curr++;
            if(j>=s.length()-1){
                continue;
            }
            j++;
        }


        return max;
    }
};
