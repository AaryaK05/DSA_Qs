//Leetcode  48

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       unordered_set<int>col;
       int temp;
       

       for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            if(col.find(j)!=col.end()){
                continue;
            }
            temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
        col.insert(i);
       }

       col.clear();

       for(int i=0;i<matrix.size();i++){
        for(int a=0,b=matrix[i].size()-1;a<matrix[i].size(),b>=0;a++,b--){
            if(col.find(a)!=col.end()){
                continue;
            }
            cout<<"Matrix["<<i<<"]["<<a<<"]to be swapped with Matrix["<<i<<"]["<<b<<"]"<<"\n";
            temp=matrix[i][a];
            matrix[i][a]=matrix[i][b];
            matrix[i][b]=temp;
            col.insert(b);
        }
        col.clear();
       }
        
    }
};
