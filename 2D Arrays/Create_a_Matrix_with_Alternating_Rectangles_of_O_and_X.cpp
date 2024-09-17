//GFG 
#include <bits/stdc++.h>
using namespace std;

// Function to print alternating rectangles of 0 and X
void fill0X(int m, int n)
{
    int firstRow=0;
    int firstCol=0;
    int lastRow=m-1;
    int lastCol=n-1;
    vector<vector<char>>res(m,vector<char>(n,'X'));
    
    char curr='X';
    
    while(firstRow<=lastRow && firstCol<=lastCol){
        for(int index=firstCol;index<=lastCol;index++){
            res[firstRow][index]=curr;
        }
        firstRow++;
        for(int index=firstRow;index<=lastRow;index++){
            res[index][lastCol]=curr;
        }
        lastCol--;
        
        if(firstRow<=lastRow){
        for(int index=lastCol;index>=firstCol;index--){
            res[lastRow][index]=curr;
        }
        lastRow--;
        }
        
        if(firstCol<=lastCol){
        for(int index=lastRow;index>=firstRow;index--){
            res[index][firstCol]=curr;
        }
        firstCol++;
        }
        
        if (curr=='X') { curr='O';}else{ curr='X';};
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

/* Driver program to test above functions */
int main()
{
	puts("Output for m = 5, n = 6");
	fill0X(5, 6);

	puts("\nOutput for m = 4, n = 4");
	fill0X(4, 4);

	puts("\nOutput for m = 3, n = 4");
	fill0X(3, 4);

	return 0;
}
