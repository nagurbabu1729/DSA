
#include<bits/stdc++.h>
using namespace std;

bool iscomposite(int n){
    if(n<=1){
        cout<<"not composite";
    }
    
    for(int i=2,s=sqrt(n);i<=s;i++){
        if(n%i==0){
           return true;
        }
    }
    return false;
}
int main(){

    int n;
    cout<<"enter the number:";
    cin>>n;
    
    if(iscomposite(n)){
        cout<<"composite";
    }
    else{
        cout<<"not composite";
    }
    
    return 0;
}