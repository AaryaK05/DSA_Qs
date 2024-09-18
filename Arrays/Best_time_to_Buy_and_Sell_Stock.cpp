//Leetcode Q-121
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int *ptr1=&prices[0];
        int *ptr2=&prices[1];
        int max=0;

        for(int i=1;i<prices.size();i++){
            if(*ptr1>*ptr2){
                if(i!=prices.size()-1){
                *ptr1=prices[i];
                *ptr2=prices[i+1];
                }
            }       
            else{
                int sum=*ptr2-*ptr1;
                if(sum>max){
                    max=sum;
                }

                if(i!=prices.size()-1){
                    *ptr2=prices[i+1];
                }
            }
        }
 
        return max;

    }
};
