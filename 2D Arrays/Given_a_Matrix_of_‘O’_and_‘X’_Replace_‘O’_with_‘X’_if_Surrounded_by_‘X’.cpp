//GFG
class Solution{
public:
    void DFS(int i,int j,vector<vector<char>>&mat){
        mat[i][j]='.';
        if(j+1<mat[0].size() && mat[i][j+1] =='O'){
            DFS(i,j+1,mat);
        }
        if(i+1<mat.size() && mat[i+1][j] =='O'){
            DFS(i+1,j,mat);
        }
        if(j-1>=0 && mat[i][j-1] =='O'){
            DFS(i,j-1,mat);
        }
        if(i-1>=0 && mat[i-1][j] =='O'){
            DFS(i-1,j,mat);
        }
    }

    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        
        
        for(int i=0;i<n;i++){
            if(i==0 || i==n-1){
                for(int j=0;j<m;j++){
                    if(mat[i][j]=='O'){
                        DFS(i,j,mat);
                    }
                }
            }
            else{
                if(mat[i][0]=='O'){
                    DFS(i,0,mat);
                }
                if(mat[i][m-1]=='O'){
                    DFS(i,m-1,mat);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]=='O'){
                    mat[i][j]='X';
                }
                if(mat[i][j]=='.'){
                    mat[i][j]='O';
                }
            }
        }
        
    return mat;    
    }
};
