class Solution {
public:
    void backtrack(int index,vector<int>& nums,vector<vector<int>>&ans) {
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            backtrack(index+1,nums,ans);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& a) {
       vector<vector<int>>ans;
       backtrack(0,a,ans);
       return ans;
    }
};
