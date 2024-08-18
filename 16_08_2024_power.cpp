#include<bits/stdc++.h>
using namespace std;

int main(){

    int x;
    cout<<"enter the x value:"<<"\n";
    cin>>x;

    int n;
    cout<<"enter the n value:"<<"\n";
    cin>>n;

    int res=1;

    bool negative=(n<0)?true:false;

    if(negative){
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
    if(negative){
        res=(1/res);
        cout<<res;
    }
    else{
        cout<<res;
    }

}