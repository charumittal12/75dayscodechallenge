#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    string k;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            continue;
        }
        else{
            k=k+str[i];
        }
    }
    cout<<k;
    return 0;
}