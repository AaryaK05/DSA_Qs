//
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        unordered_map<int,int>mp;
        vector<int>ans;
        
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])!=mp.end()){
                ans.push_back(arr[i]);
            }else{
                mp[arr[i]]=i;
            }
        }
        
        for(int i=1;i<=n;i++){
            if(mp.find(i)==mp.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
