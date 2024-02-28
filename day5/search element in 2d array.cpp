#include <bits/stdc++.h> 
using namespace std;
pair<int, int> search(vector<vector<int>> matrix, int x)
{
    // Write your code here.
    int n=matrix.size();
    int row=0;
    while(row<n){
        for(int i=0;i<n;i++){//column
            if(matrix[row][i]==x){
              return {row, i};
            }
        }
        row++;
    }
    return{-1,-1};
}