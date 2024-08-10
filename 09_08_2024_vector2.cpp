#include<bits/stdc++.h>
using namespace std;

void v(vector<int>& nums){

    for(int i=0;i<nums.size();i++){
        cin>>nums[i];
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}

int main(){

    vector<int>nums(5);

    v(nums);

}