#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int n=arr.size();
    int ans=0;
    int ans1=0;
	for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<n;i++){
        ans1=ans1^i;
    }
    return ans^ans1;
}