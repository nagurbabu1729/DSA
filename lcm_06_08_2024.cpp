#include<bits/stdc++.h>
using namespace std;

int gcd(int num1,int num2){
    
    if(num1==0 and num2==0){
       cout << "lcm is undefined";
       return 0;
       
    }

    else if(num1==0 or num2==0){
       cout<< "lcm is undefined";
       return 0;
        
    }

   else{
        int rem=num1%num2;
        while(rem!=0){
            num1=num2;
            num2=rem;
            rem=num1%num2;
        }
   }
   return num2;
}

int main(){

    int num1=12,num2=18;
    int res=gcd(num1,num2);
    int lcm=(num1*num2)/res;
    cout<< "lcm is "<<lcm;
    return 0;
}