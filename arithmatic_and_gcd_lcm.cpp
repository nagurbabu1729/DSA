#include<bits/stdc++.h>

using namespace std;

int gcd(int number1,int number2);

int main(){

    while(true){
        cout<<"1.Addition\n2.Subtraction\n3.multiplication\n4.Division\n5.modularDivision|n6.gcd|7.lcm";
    int number1;
    int number2;

    cout<<"enter the number1:";
    cin>>number1;

    cout<<"enter the number2:";
    cin>>number2;

    int choice;
    cout<<"enter the choice:";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<number1+number2;
            break;
        case 2:
            cout<<number1-number2;
            break;
        case 3:
            cout<<number1*number2;
            break;
        case 4:
            if(number2==0){
                cout<<"numarator not to be zero";
            }
            else{
                cout<<number1/number2;
            }
            break;
        case 5:
            cout<<number1%number2;
            break;
        case 6:
            cout<<gcd(number1,number2);
            break;
        case 7:
            int gc1=gcd(number1,number2);
            int lcm=(number1*number2)/gc1;
            cout<<lcm;
            break;
    }
    return 0;
}
int gcd(int number1,int number2)
{
    for(int i=min(number1,number2);i>0;i--)
    {
        if(number1%i==0 and number2%i==0)
        {
            return i;
            break;
        }
    }
    return 0;
}
}