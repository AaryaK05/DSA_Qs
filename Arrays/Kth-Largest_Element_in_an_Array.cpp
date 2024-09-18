//Leetcode Q-215

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;

        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }

        for(int j=0;j<nums.size()-k;j++){
            cout<<pq.top();
            pq.pop();
        }
        return pq.top();
    }
};
