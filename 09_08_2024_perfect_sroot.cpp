#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=50;

    vector<int>nums;

    int srt=sqrt(n);

    for(int i=1;i<=srt;i++){
        if(n%i==0){
            nums.push_back(i);
            nums.push_back(n/i);
        }
    }

    if(srt*srt==n){
        nums.pop_back();
    }

    //sort(nums.begin(),nums.end());

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}