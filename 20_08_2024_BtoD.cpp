#include<bits/stdc++.h>
using namespace std;


int main(){

    string s;
    cout<<"enter the number:";
    cin>>s;

    int n = s.size();

    int power = n-1;

    int res = 0;

    for(int i = 0; i < n; i++, power--) {

        if(s[i] == '1') {
            res=res+(i,pow(2,power));
        }

    }

    cout<<res;
    
    return 0;
    
}