#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=5;

    for(int i=1;i<=n;i++){
        char ch='A';
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++,ch++){
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
}