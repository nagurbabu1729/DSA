#include<bits/stdc++.h>
using namespace std;

void v(vector<int> &nums){

    for(int i=0,sz=nums.size();i<sz;i++){
        cout<<nums[i]<<" ";
    }
}

int main(){

    vector<int>nums={12,29,39,49,40};

    v(nums);
}