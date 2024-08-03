#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int number1;
    int number2;
    cout<<"enter the number1:";
    cin>>number1;
    cout<<"enter the number2:";
    cin>>number2;
    for(int i=min(number1,number2);;i--){
        if(number1%i==0 and number2%i==0){
            cout<<i;
            break;
        }
    }
    return 0;
}