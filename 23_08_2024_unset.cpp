#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n=42;
    
    int pos=3;

    bool is_zero=false;
    
    if((n&(1<<pos))==0){
        is_zero=true;
    }
    
    if(is_zero){
        cout<<"nothing to do";
        return 0;
    }
    
    n=n&~(1<<pos);
    cout<<n;
    
    return 0;
}