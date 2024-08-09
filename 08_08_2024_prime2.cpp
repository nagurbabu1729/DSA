#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=40;
    
    bool is_prime[n+1];

    for(int i=0;i<=n;i++){
        is_prime[i]=true;
    }

    is_prime[0]=false;
    is_prime[1]=false;

    for(int i=2;i<=sqrt(n);i++){
        if(is_prime[i]==true){
            for(int j=i*i;j<=n;j=j+i){
                is_prime[j]=false;
            }
        }
    }

    for(int i=0;i<=n;i++){
        if(is_prime[i]){
            cout<<i<<" ";
        }
    }
}