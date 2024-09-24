//Leetcode 11
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;

        int max=0;
        int area=0;

        while(left<right){
            area=min(height[left],height[right])*(right-left) ;  
            if(area>max){
                max=area;
            }     
            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
            area=0;
        }

        return max;
    }
};
