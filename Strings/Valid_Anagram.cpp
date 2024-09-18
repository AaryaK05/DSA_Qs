//Leetcode Q-242

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;

        if(s.length()!=t.length()){
            return false;
        }

        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]+=1;
            }else{
                mp[s[i]]=1;
            }
        }

        for(auto a=mp.begin();a!=mp.end();a++){
            cout<<a->first<<":"<<a->second;
        }

        for(int j=0;j<t.length();j++){
            if(mp.find(t[j])==mp.end()){
                return false;
            }
            else{
                if(mp[t[j]]==0){
                    return false;
                }
                mp[t[j]]-=1;
            }
        }
 
        return true;
    }
};
