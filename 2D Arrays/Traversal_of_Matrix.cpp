//GFG 

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends


class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
        vector<int>res;
		
		for(int i=0;i<matrix.size();i++){
		    int a=i;
		    int b=0;
		    while(a>=0 && b>=0){
		        res.push_back(matrix[b][a]);
		        b++;
		        a--;
		    }
		}
		
		for(int i=1;i<matrix.size();i++){
		    int a=i;
		    int b=matrix.size()-1;
		    while(a<matrix.size()&& b<matrix.size()){
		        res.push_back(matrix[a][b]);
		        a++;
		        b--;
		    }
		}
		
		return res;
    }
};

//{ Driver Code Starts.
int main() {
   //..........
}
// } Driver Code Ends
