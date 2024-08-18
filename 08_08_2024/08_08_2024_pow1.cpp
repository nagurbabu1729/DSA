#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n = 10;
    int x = 2;
    int res = 1;

    while(n!=0)
    {
        if(n%2==0)
        {
            x=x*x;
            n=n/2;
        }
        else
        {
            res=res*x;
            n--;
        }
    }
    cout<<res;
    return 0;
}