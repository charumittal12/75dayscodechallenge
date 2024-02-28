#include<iostream>
using namespace std;
bool binarySearch(int *arr,int s, int e, int k){
    int mid=s+(e-s)/2;
    //base case

    //base case when element is not found
    if(s>e){
        return false;
    }
    //base case when element is found
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
}
int main(){
    int arr[6]={2,4,6,10,14,16};
    int size=6;
    int key=14;
    return 0;
}