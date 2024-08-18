#include<bits/stdc++.h>
using namespace std;

int main(){

    int start;
    cout<<"enter the start value:"<<"\n";
    cin>>start;

    int end;
    cout<<"enter the end value:"<<"\n";
    cin>>end;

    bool is_prime[end+1];
    
    for(int i=0;i<=end;i++){
        is_prime[i]=true;
    }

    is_prime[0]=false;
    is_prime[1]=false;

    if(start<0){
        cout<<"number should not start with negative"<<"\n";
        return 0;
    }
    
    
    for(int i=0,s=sqrt(end);i<=s;i++){
        if(is_prime[i]==true){
            for(int j=i*i;j<=end;j=j+i){
                is_prime[j]=false;
            }
        }
    }

    for(int i=start;i<=end;i++){
        if(is_prime[i]==true){
            cout<<i<<" "<<"\n";
        }
    }

    return 0;
}