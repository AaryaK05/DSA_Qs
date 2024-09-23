//Leetcode 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size());
        vector<int> suf(nums.size());
        int index = 0;
        int prod=1;

        for(int i=0;i<nums.size();i++){
            if(i==0){
                prod=1;
            }
            else{
                prod=prod*nums[i-1];
            }
            pre[i]=prod;
        }

        for(int i=nums.size()-1;i>=0;i--){
            if(i==nums.size()-1){
                prod=1;
            }
            else{
                prod=prod*nums[i+1];
            }
            suf[i]=prod;
        }

        for(int i=0;i<nums.size();i++){
            nums[i]=pre[i]*suf[i];
        }

        return nums;
    }
};
