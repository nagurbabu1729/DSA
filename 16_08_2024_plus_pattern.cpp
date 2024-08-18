#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n=11;
    int half=n/2+n%2;

    for(int i=1;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==half or j==half){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
     return 0;
}