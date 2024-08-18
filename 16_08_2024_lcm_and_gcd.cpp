#include<bits/stdc++.h>
using namespace std;

int gcd(int num1,int num2){

    if(num1==0){
        return num2;
    }
    if(num2==0){
        return num1;
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


    int num1;
    int num2;

    cout<<"enter the number1:"<<"\n";
    cin>>num1;

    cout<<"enter the number2:"<<"\n";
    cin>>num2;

   if(num1==0 and num2==0){
    cout<<"gcd and lcm is undefined"<<"\n";
   }
   else{
    if(num1==0 or num2==0){
        cout<<"lcm is undefined"<<"\n";
        int gc=gcd(num1,num2);
        cout<<"gcd is:"<< gc;
    }
    else{
        int gc=gcd(num1,num2);
        int lcm=(num1*num2)/gc;
        cout<<"gcd is:"<< gc<<"\n";
        cout<<"lcm is:"<< lcm;
    }

    }
     return 0;
}