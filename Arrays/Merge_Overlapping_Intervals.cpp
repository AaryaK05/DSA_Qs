//GFG 
#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {

    // Sort intervals based on start values
    sort(arr.begin(),arr.end());
    unordered_set<int>map;
    vector<vector<int>> ans;
    
    for(int i=0;i<arr.size()-2;i++){
        if(arr[i][1]<=arr[i+1][1]){
            int first=min(arr[i][0],arr[i+1][0]);
            int second=max(arr[i][1],arr[i+1][1]);
            arr[i+1][0]=first;
            arr[i+1][1]=second;
        
            if(map.find(first)==map.end()&& map.find(second)==map.end()){
                ans.push_back({first,second});
            }
        }
    }

    return ans;
}

// Driver Code
int main() {
    vector<vector<int>> arr = {{6, 8}, {1, 9}, {2, 4}, {4, 7}};
    vector<vector<int>> res = mergeOverlap(arr);

    cout << "The Merged Intervals are: ";
    for (const vector<int>& interval : res) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}
