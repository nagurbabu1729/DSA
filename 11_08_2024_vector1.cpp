// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

int main(){

    // a
    
    vector<int>nums{12,94,0,15,53,63};


    // b
    nums[3]=99;

    // c
    sort(nums.begin(),nums.end(),greater<int>());

    //d
    int ele=14;

    int ele1=15;

    auto it=find(nums.begin(),nums.end(),ele);

    auto it1=find(nums.begin(),nums.end(),ele1);


    if(it!=nums.end()){
        int index = it - nums.begin(); 
        cout << "element present at index:" <<index << endl; 
    }
    else { 
        cout << "element not present" << endl; 
    } 

    if(it1!=nums.end()){
        int index1 = it1 - nums.begin(); 
        cout <<"element present at index:" << index1 << endl; 
    }
    else { 
        cout << "element not present" << endl; 
    } 

    for(int& nums1:nums){
        cout<<nums1<<" ";
    }
    
    return 0;
}