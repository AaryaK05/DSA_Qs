//Leetcode 153
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int right=nums.size()/2;
        int temp;
        int min=INT_MAX;

        if(nums.size()==1){
            return nums[0];
        }

        while(left!=right){
            if(nums[right]<nums[left]){
                if(nums[right]<min){
                    min=nums[right];
                }
                right=(left+right)/2;
            }
            else{
                 if(nums[left]<min){
                    min=nums[left];
                 }
                temp=(nums.size()+right)/2;
                left=right;
                right=temp;
            }
        }
        
        return min;
    }
};
