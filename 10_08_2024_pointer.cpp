#include<bits/stdc++.h>
using namespace std;

int main(){

    int a=45;

    int* ptr=&a;

    cout<<"a value:" << a<<endl;
    cout<<"address of a(&a):" << &a<<endl;
    cout<<"what is in ptr:" <<ptr<<endl;
    cout<<"ptr address(&ptr):"  <<&ptr<<endl;
    cout<<"accessing a value by pointer using (* before pointer variable):" << *ptr<<endl;
    //cout<<"it gives error value:"<< *a;

    if(ptr==&a){
       cout<<"two address are same";
    }
    else{
        cout<<"two address are not same";
    }
}