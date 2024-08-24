#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n=10;
    
   for(int i=0;i<4;i++){
       
       if((n&(1<<i))==0){
           cout<<"0"<<"\n";
       }
       else{
           cout<<"1"<<"\n";
       }
   }
    
    return 0;
}