#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n=42;
    
    int pos=4;
    
    bool status=false;
    
    if((n&(1<<pos))!=0){
        status=true;
    }
    
    if(status){
        cout<<"nothing to do";
        return 0;
    }

    n=n|(1<<pos);
    
    cout<<n;
    
    return 0;
    
}