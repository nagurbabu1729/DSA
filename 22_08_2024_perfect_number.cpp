#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"enter the number:";
    cin>>n;

    int sum=0;

    if( n > 0) {
        for(int i = 1; i < n; i++) {
            if(n%i == 0){
                cout <<i << "\n";
                sum = sum + i;
        }
    }
    }

    
    if(sum == n){
        cout<<n<< " is perfect number";
    }

    else{
        cout<<n<< " is not a perfect number";
    }

    return 0;

}