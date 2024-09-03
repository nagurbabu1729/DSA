#include<bits/stdc++.h>
using namespace std;

int main(){
    
    
    int n;
    cout<<"enter the n value:";
    cin>>n;
    
    int s=sqrt(n);
    
    if(s*s==n){
        cout<<"perfect square";
    }
    
    else{
        cout<<"not a perfect square";
    }

    return 0;
}