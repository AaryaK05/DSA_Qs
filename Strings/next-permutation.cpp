//gfg
class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int max=-1;
        for(int i=arr.size()-1;i>0;i--){
            if(arr[i-1]<arr[i]){
                max=i-1;
                break;
            }
        }
        
        // cout<<"max"<<max<<"\n";
        
        if(max==-1){
            sort(arr.begin(),arr.end());
            return;
        }
        
        sort(arr.begin()+max+1,arr.end());
        // 
        
        for(int i=max+1;i<arr.size();i++){
            if(arr[i]>arr[max]){
                int temp=arr[i];
                arr[i]=arr[max];
                arr[max]=temp;
                break;
            }
        }
        
        
    }
};
