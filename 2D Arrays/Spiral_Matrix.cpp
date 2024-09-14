//Leetcode 54

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int firstrow=0;
        int firstcol=0;
        int lastrow=matrix.size()-1;
        int lastcol=matrix[0].size()-1;
        int size=matrix.size()*matrix[0].size();
        cout<<size<<"\n";

        while(firstrow<=lastrow && firstcol<=lastcol){

            //moving left to right row
            for(int index=firstcol;index<=lastcol;index++){
                ans.push_back(matrix[firstrow][index]);
                cout<<ans.size()<<"\n";
            }
            firstrow++;

            //moving top to bottom coloumn
            for(int index=firstrow;index<=lastrow;index++){
                ans.push_back(matrix[index][lastcol]);
                cout<<ans.size()<<"\n";
            }
            lastcol--;

            //moving right to left column
            if(firstrow<=lastrow){
            for(int index=lastcol;index>=firstcol;index--){
                ans.push_back(matrix[lastrow][index]);
                cout<<ans.size()<<"w\n";
            }
            lastrow--;
            }

            //moving bottom to top row
            if(firstcol<=lastcol){
            for(int index=lastrow;index>=firstrow;index--){
                ans.push_back(matrix[index][firstcol]);
                cout<<ans.size()<<"\n";
            }
            firstcol++;
            }
        }
        

        return ans;
    }
};
