#include<bits/stdc++.h>
using namespace std;

int main(){

   int n=5;

    vector<int>nums(n);

    cout<<"enter the numbers:"<<"\n";
    for(int i=0;i<nums.size();i++){
        cin>>nums[i];
    }

    cout<<"op:"<<"\n";
    for(auto& tr:nums){
        cout<<tr<<" "<<"\n";
    }

    int d=nums[1]/nums[0];
    
    if(nums[1]/nums[0] == d && nums[2]/nums[1] == d && nums[3]/nums[2] == d && nums[4]/nums[3] == d){
        cout<< "in geometric progression";
    }

    else{
        cout<< "not in geometric progression";
    }


    return 0;
}