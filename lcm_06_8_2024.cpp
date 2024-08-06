#include<iostream>
using namespace std;

int gcd(int num1,int num2){
    
    if(num1==0 and num2==0){
        return 0;
    }

        int rem=num1%num2;
        while(rem!=0){
            num1=num2;
            num2=rem;
            rem=num1%num2;
        }
        return num2;
}

int main(){

    int num1=0,num2=18;
    if(num1==0 or num2==0){
        cout<< "lcm is undefined";
    }
    else{
        int res=gcd(num1,num2);
        int lcm=(num1*num2)/res;
        cout << "lcm is"  << lcm;
    }
    return 0;
    }
