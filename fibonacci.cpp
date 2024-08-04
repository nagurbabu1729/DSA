#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1=0;
    int num2=1;

    int num3;
    cout<<"enter the number:";
    cin>>num3;

    if(num3==0){
        cout<<num3;
    }

    if(num3==1){
        cout<<num3;
    }

    for(int i=num1;i<num3;i++)
    {
        int num4=num1+num2;
        cout<<num1<<" ";
        num1=num2;
        num2=num4;
    }

    return 0;
}