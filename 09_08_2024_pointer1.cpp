#include<bits/stdc++.h>
using namespace std;

void f(int nums[],int size){
    for(int i=0;i<size;i++){
        cout<<nums[i]<< " ";
    } 

   // cout<<nums[0]<<"\n";
   // cout<<nums[1]<<"\n";
}

int main(){

    int nums[]={12,26,38,30,90};

    int size=sizeof(nums)/sizeof(nums[3]);

    cout<<"size of nums is:" <<size<<"\n";

    f(nums,size);
}