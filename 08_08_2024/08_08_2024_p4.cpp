#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=5;

    for(int i=1;i<=n;i++){
        char ch='A'+i-1;
        for(int k=1;k<=n-i;k++){
            cout<< " ";
        }
        for(int j=1;j<=i;j++){
            cout<<ch;
            ch--;
        }
        cout<<"\n";
    }

}