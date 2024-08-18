#include<bits/stdc++.h>
using namespace std;

bool is_prime(int num){
    if(num<=1){
        return false;
    }
    for(int i = 2, s = sqrt(num); i <= s; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    
    int number;
    cout<<"enter the number:\n";
    cin>>number;

    if(is_prime(number)){
        cout<<number << " is prime";
    }
    else{
        cout<<number<< " is composite";
    }

}