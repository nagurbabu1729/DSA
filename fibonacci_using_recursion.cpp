#include<bits/stdc++.h>

using namespace std;

int fibo(int number){

    if(number<=1){
        return number;
    }

    else{
        return fibo(number-1)+fibo(number-2);
    }
}

int main(){
    
    int num;
    cout<<"enter the number:";
    cin>>num;
    int res=fibo(num);
    return 0;
   
}