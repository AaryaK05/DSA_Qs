//GFG
class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>>minHeap;
        
        for(int i=0;i<arr.size();i++){
            minHeap.push(arr[i]);
        }
        
        for(int i=1;i<k;i++){
            minHeap.pop();
        }
        
        return minHeap.top();
    }
};
