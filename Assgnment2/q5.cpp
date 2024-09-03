#include<bits/stdc++.h>
using namespace std;

int f(int n){
    
    if(n==0){
        return 1;
    }
    return n*f(n-1);
}


int main(){
    
    int n;
    cout<<"enter the number:";
    cin>>n;
    
    int g=f(n);
    cout<<g;
    return 0;
}