#include<bits/stdc++.h>
using namespace std;

bool is_prime(int num){
    for(int i=2;i<sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int i=21;
    if(is_prime(i)==true){
        cout<< i  << " is prime number";
    }
    else{
        cout<< i  << " is not a prime number"; 
    }
}