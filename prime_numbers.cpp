#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1=7;
    int num2=17;
    int count=0;
    int i;
    for(i=num1;i<=num2;i++){
        for(int j=2;i<num1;j++){
            if(i%j==0){
                count=1
            }
        }
    }
    if(count==0){
        cout<<i;
    }
    return 0;
}