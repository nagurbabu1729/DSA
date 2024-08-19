#include<bits/stdc++.h>
using namespace std;


bool is_prime(int n,int d){

    if(n==d){
        return true;
    }

    if(n%d==0){
        return false;
    }

    else{
        return is_prime(n,d+1);
    }
    return true;

}

int main(){

    int n;
    cout<<"enter the number:";
    cin>>n;

    int d;
    cout<<"enter the number:";
    cin>>d;

    if(is_prime(n,d)){
        cout<<"prime";
    }
    else{
        cout<<"composite";
    }
    
}