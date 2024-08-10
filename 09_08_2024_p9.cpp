#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=6;

    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(j==1 or j==5){
                cout<<"*";
            }
        }
        for(int k=1;k<=n-2;k++){
                cout<<" ";
            }
       cout<<"\n";
    }
}