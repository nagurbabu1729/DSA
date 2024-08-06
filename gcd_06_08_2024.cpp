#include<iostream>
using namespace std;

void gcd(int num1,int num2){
    
    if(num1==0 and num2==0){
        cout<< "gcd is undefined";
        return;
    }

    if(num1==0){
        cout<< "gcd is"   <<num2;
        return;
    }

    if(num2==0){
        cout<< "gcd is "  <<num1;
        return;
    }
        int rem=num1%num2;
        while(rem!=0){
            num1=num2;
            num2=rem;
            rem=num1%num2;
        }
        cout << " gcd is "  <<num2;
}

int main(){

    int num1=12,num2=18;
    gcd(num1,num2);
    return 0;
}