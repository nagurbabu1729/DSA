#include<bits/stdc++.h>
using namespace std;

void f(int* ptr,int size){

    for(int i=0;i<size;i++){
        cout<< *(ptr+i)<< " ";
    }

}

int main(){

    int nums[]={12,29,39,49,89};

    int size=sizeof(nums)/sizeof(nums[0]);

    int* ptr=&nums[0];

}