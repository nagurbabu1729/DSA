#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=2;
    int n=8;
    while(n!=0){
        x=x*x;
        n=n/2;
    }
    cout<<x;
    return 0;
}