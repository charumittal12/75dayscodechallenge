#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int sum=0;
        int n=seats.size();
        for(int i=0;i<n;i++){
            if(seats[i]!=students[i]){
                if(seats[i]>students[i]){
                    sum=sum+(seats[i]-students[i]);
                }
                else{
                    sum=sum+(students[i]-seats[i]);
                }
            }
        }
        return sum;
    }
};
