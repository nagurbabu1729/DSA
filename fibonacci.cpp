#include<bits/stdc++.h>
using namespace std;

int main(){

    int num1=0;
    int num2=1;
    int num3;

    int number;
    cout<<"enter the number:";
    cin>>number;
    if(number==0){
        
    }
    else if(number==1){
        cout<<0;
    }
    else{
        for(int i=num1;i<number;i++){
            num3=num1+num2;
            cout<<num1<<" ";
            num1=num2;
            num2=num3;
        }
    }
}