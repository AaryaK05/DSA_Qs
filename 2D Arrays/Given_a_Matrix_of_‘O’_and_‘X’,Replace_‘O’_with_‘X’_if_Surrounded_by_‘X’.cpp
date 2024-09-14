//GFG 
class Solution {
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int row=grid.size();
        int col=grid[0].size();
        int count=0;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    count+=1;
                    DFS(i,j,grid);
                }
            }
        }
        return count;
    }
    
    void DFS(int r,int c,vector<vector<char>>&grid){
        grid[r][c]='0';
        
        if(r>0 && grid[r-1][c]=='1'){
            DFS(r-1,c,grid);
        }
        if(r+1<grid.size() && grid[r+1][c]=='1'){
            DFS(r+1,c,grid);
        }
        if(c>0 && grid[r][c-1]=='1'){
            DFS(r,c-1,grid);
        }
        if(c+1<grid[0].size() && grid[r][c+1]=='1'){
            DFS(r,c+1,grid);
        }
        
        if((r>0 && c>0) && (grid[r-1][c-1]=='1')){
            DFS(r-1,c-1,grid);
        }
        if((r+1<grid.size() && c+1<grid[0].size()) && (grid[r+1][c+1]=='1')){
            DFS(r+1,c+1,grid);
        }
        if((r+1<grid.size() && c>0) && (grid[r+1][c-1]=='1')){
            DFS(r+1,c-1,grid);
        }
        if((r>0 && c+1<grid[0].size()) && (grid[r-1][c+1]=='1')){
            DFS(r-1,c+1,grid);
        }

        return;
    }
};
