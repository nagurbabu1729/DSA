#include <bits/stdc++.h>
using namespace std;

int main(){
    int num1=12;
    int num2=18;
    for(int i =max(num1,num2);;i++){
        if(num1%i==0 and num2%i==0){
            cout<<"lcm of num1 and num2"<< i;
            break;
        }
    }
    return 0;
}