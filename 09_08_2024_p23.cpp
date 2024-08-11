#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=4;

    for(int i=n;i>=1;i--){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
         int n1=1;
        for(int j=1;j<=i;j++){
            cout<<n1;
            n1++;
        }
        cout<<"\n";
    }

}