#include<bits/stdc++.h>
using namespace std;


int main(){

    int n=42;

    for(int i=31;i>=0;i--){
        if((i&1)==0){
            n=n|(1<<i);
        }
    }
    cout<<n;

    return 0;
}