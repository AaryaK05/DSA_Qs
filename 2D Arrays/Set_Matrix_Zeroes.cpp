// Leetcode 73

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
  
        unordered_set<int>rows;
        unordered_set<int>column;
        
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    if(rows.find(i)==rows.end()){
                        rows.insert(i);
                    }
                    if(column.find(j)==column.end()){
                        column.insert(j);
                    }
                }
            }
            
        }
    for(auto it=rows.begin();it!=rows.end();it++){
        setRowValues(matrix,(*it));
    }
    
    for(auto it=column.begin();it!=column.end();it++){
        setColumnValues(matrix,(*it));
    }

    }


    void setRowValues(vector<vector<int>> &matrix,int r){
        for(int i=0;i<matrix[r].size();i++){
            matrix[r][i]=0;
        }
    }

    void setColumnValues(vector<vector<int>> &matrix,int c){
        for(int i=0;i<matrix.size();i++){
            matrix[i][c]=0;
        }
    }
};
