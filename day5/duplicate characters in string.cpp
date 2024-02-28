#include <bits/stdc++.h> 
using namespace std;
vector<pair<char,int>> duplicate_char(string s, int n){
    // Write your code here.
    map <char, int> map;
    for(int i = 0; i < n; i++){
        map[s[i]]++;
    }
    vector<pair<char, int>> ans;
    for(auto i : map){
        if(i.second > 1){
            pair<char, int> temp(i.first, i.second);
            ans.push_back(temp);
        }
    }
    return ans;
}