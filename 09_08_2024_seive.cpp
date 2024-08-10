// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=100;
    
    bool is_prime[n+1];

    for(int i=0;i<=n;i++){
        is_prime[i]=true;
    }

    is_prime[0]=false;
    is_prime[1]=false;

    for(int i=2;i<=n;i++){
        if(is_prime[i]==true){
            for(int j=i+i;j<=n;j=j+i){
                is_prime[j]=false;
            }
        }
    }
    
    cout<<"composite numbers:"<<"\n";
    for(int i=20;i<=50;i++){
        if(is_prime[i]==false){
            cout<<i<<" "<<"\n";
        }
    }
    
    cout<<"prime numbers:"<<"\n";
    for(int i=50;i<=100;i++){
        if(is_prime[i]){
            cout<<i<<" ";
        }
    }
    return 0;
}