//GFG + Naukri
#include <bits/stdc++.h> 
int findPairSum(vector<int> arr, int target)
{
    //Write your code here
    int pivot=0;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]){
            pivot=i+1;
            break;
        }
    }

    int max=arr.size()-1;
    if(pivot!=0){
        max=pivot-1;
    }


    while(pivot!=max){
        
        if(arr[pivot]+arr[max]==target){
            return true;
        }
        if(arr[pivot]+arr[max]<target){
            pivot=(arr.size()+pivot+1)%arr.size();
        }
        else{
            max=(arr.size()+max-1)%arr.size();
        }
    }

    return false;
}
