#include<bits/stdc++.h>

using namespace std;


int gcd(int number1,int number2){
   int rem=number1%number2;
   while(rem!=0){
    number1=number2;
    number2=rem;
    rem=number1%number2;
   }
    return number2;
}


int main(){

    //gcd function returned value
    int res;
    // for lcm
    int lcm;

    
    int choice;
    while(choice!=8){
        cout<<"1.Addition\n2.Subtraction\n3.multiplication\n4.Division\n5.modularDivision\n6.gcd\n7.lcm\n8.exit"<<endl;
    int number1;
    int number2;

    cout<<"enter the number1:";
    cin>>number1;

    cout<<"enter the number2:";
    cin>>number2;

    cout<<"enter the choice:";
    cin>>choice;

   // for clarity purpose of printing lcm of two numbers with original given numbers;
   // int num1=number1;
   // int num2=number2;

    switch(choice){
        case 1:
            cout<<"Addition:"<<number1+number2<<endl;
            break;
        case 2:
            cout<<"Subtraction:"<<number1-number2<<endl;
            break;
        case 3:
            cout<<"multiplication:"<<number1*number2<<endl;
            break;
        case 4:
            if(number2==0){
                cout<<"denominator not to be zero";
            }
            else{
                cout<<"division:"<<number1/number2<<endl;
            }
            break;
        case 5:
            if(number2==0){
                cout<<"m_division is not possible:"<<<endl;
            }
          else{
              cout<<"modular_division:"<<number1%number2<<endl;
          }
            break;
        case 6:
            if(number1==0 and number2==0){
                cout<<"gcd is undefined"<<endl;
            }
            else if(number1==0){
                cout<<"gcd of two numbers:"<<number2<<endl;
            }

            else if(number2==0){
                cout<<"gcd of two numbers:"<<number1<<endl;
            }
            else{
                res=gcd(number1,number2);
                cout<<"gcd of two numbers:"<<res<<endl;
            }
            break;

        case 7:
            if(number1==0 and number2==0){
                cout<<"lcm is undefined";
            }
            else if(number1==0 or number2==0){
                cout<<"lcm is undeifned";
            }
            else{
                res=gcd(number1,number2);
                lcm=(number1*number2)/res;
                cout<<"lcm of two numbers:"<<lcm<<endl;
            }
            break;
        case 8:
            return 0;
            
        default:
            cout<<"enter the correct choice:"<<endl;
            break;
    } 
}
}