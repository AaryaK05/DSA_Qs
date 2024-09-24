//Leetcode 15
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        
        int left,right,sum;
        
        for(int i=0;i<nums.size()-2;i++){
            if(i==0||(i>0 && nums[i]!=nums[i-1])){
                left=i+1;
                right=nums.size()-1;
                sum=0-nums[i];

                while(left < right ){
                    if(nums[left]+nums[right]==sum){
                        ans.push_back({
                            nums[i],
                            nums[left],
                            nums[right]
                        });
                        while(left<right && nums[left]==nums[left+1]){
                            left++;
                        }
                        while(left<right && nums[right]==nums[right-1]){
                            right--;
                        }
                        left++;
                        right--;
                    }
                    else if(nums[left]+nums[right]>sum){
                        right--;
                    }
                    else{
                        left++;
                    }
                }

            }
        }
        return ans;
    }
};
