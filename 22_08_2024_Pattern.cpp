#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=4;
    for(int i=1;i<=n;i++){
        int v=0;
        int v1=1;
        for(int j=1;j<=i;j++){
            
            if(i%2==0){
                cout<<v;
                v=1-v;
            }
            else{
                cout<<v1;
                v1=1-v1;
            }
        }
        cout<<"\n";
    }
    return 0;
}