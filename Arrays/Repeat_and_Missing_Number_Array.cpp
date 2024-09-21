//
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
         long long N=arr.size();
    long long SumofN=N*(N+1)/2;
    long long SumofArray=0;
    for(auto it:arr){
        SumofArray+=it;
    }
    // cout<<SumofN<<","<<SumofArray;
    long long FirstEq=SumofArray-SumofN; //x-y
    
    // cout<<"\n";
    long long SumofSqN=(N*(N+1)*(2*N+1))/6;
    long long SumofSqArray=0;
    for(auto it:arr){
        SumofSqArray+=(long long)it*(long long)it;
    }
    // cout<<SumofSqN<<","<<SumofSqArray;
    
    long long SecondEq=(SumofSqArray-SumofSqN)/FirstEq;//x+y
    // cout<<"\n";
    long long RepeatedEle=(FirstEq+SecondEq)/2;//x
    long long MissingEle=RepeatedEle-FirstEq;//y
    // cout<<RepeatedEle<<"|"<<MissingEle<<"\n";
    
    
    
    
    return {RepeatedEle,MissingEle};
    }
};
