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
        cout<<"lcm is undefined";
    }
    else if(number1==0 or number2==0){
        cout<<"lcm is undefined";
    }

    else{
      for(int i=max(number1,number2);;i++){
        if(i%number1==0 and i%number2==0){
            cout<<i;
            break;
        }

      }    
    }
    return 0;
}