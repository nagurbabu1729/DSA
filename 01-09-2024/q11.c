#include<bits/stdc++.h>
using namespace std;

int main(){


    string s="akash and nagur";

    int start=0;
    int end=s.length()-1;

    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }

    cout<<s;

    return 0;
}