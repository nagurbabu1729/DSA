#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int number1;
    int number2;

    cout<<"enter the number1:";
    cin>>number1;

    cout<<"enter the number2:";
    cin>>number2;
    
    if(number1==0 and number2==0){
        cout<<"gcd is undefined";
    }
    else if(number1==0){
        cout<<number2;
    }
    else if(number2==0){
        cout<<number1;
    }
    else{
        for(int i=min(number1,number2);i>0;i--){
        if(number1%i==0 and number2%i==0){
            cout<<i;
            break;
        }
    }
    }

    return 0;
}