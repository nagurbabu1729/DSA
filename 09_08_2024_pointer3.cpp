#include<bits/stdc++.h>
using namespace std;

int main(){

    int* ptr = new int[6];

    for(int i=0;i<6;i++){
        cin>> *(ptr+i);
    }
    for(int i=0;i<6;i++){
        cout<< *(ptr+i)<<" ";
    }

}