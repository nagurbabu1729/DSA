#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=4;

    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        int n1=4;
        for(int j=1;j<=i;j++){
            cout<<n1;
            n1--;
        }
        cout<<"\n";
    }
}