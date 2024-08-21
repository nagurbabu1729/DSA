#include<bits/stdc++.h>
using namespace std;

int main(){

    int x,n;

    cout<< " enter the x number : " ;
    cin>>x;

    cout<< " enter the n number :";
    cin>>n;
    
    double res=1.0;
    
    bool n_negative=(n<0)?true:false;
    
    if(n_negative){
        n=-n;
    }
    
    while(n!=0){
       if(n%2==0){
            x=x*x;
            n=n/2;
       }
       else{
           res=res*x;
           n--;
       }
    }
    
    if(n_negative){
        res=(1/res);
        cout<<res;
    }
   
    else{
        cout<<res;
    }
    return 0;
}