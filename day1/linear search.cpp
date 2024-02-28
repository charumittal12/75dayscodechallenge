#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    //recursive case
    else{
        bool remainingPart=search(arr+1,size-1,key);
        return remainingPart;
    }
    
}
int main(){
    int arr[5]={3,5,1,2,3};
    int size=5;
    int key=1;
    bool ans=search(arr,size,key);
    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"not present"<<endl; 
    }
    return 0;
}