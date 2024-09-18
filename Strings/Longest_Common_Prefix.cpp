//Leetcode 14

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size=strs[0].size();
        int index=0;
        int count=0;
        string ans="";

        
        if(strs.size() == 1){
            return strs[0];
        }

        for(int i=0;i<strs.size();i++){
            if(strs[i].size()<size){
                size=strs[i].size();
            }
        }


        while(index!=size){
            count=0;
            for(int j=1;j<strs.size();j++){
                if(strs[j][index] == strs[0][index]){
                    count++;
                }
            }

            if(count==strs.size()-1){
                ans+=strs[0][index];
                index++;
            }

            if(count!=strs.size()-1){
                return ans;
            }
        }

        return ans;
        
    }
};
