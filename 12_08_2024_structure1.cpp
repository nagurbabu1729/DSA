#include<bits/stdc++.h>
using namespace std;

struct Tcs{

    int empid;
    string companyname;
    string location;
    int pincode;

};

static bool compare(Tcs a,Tcs b){
    if(a.empid<b.empid){
        return true;
    }
    else{
        return false;
    }
}


int main(){

    vector<Tcs> nums{{2561950,"tcs","mum",400708}, {827373,"cognizant","kolkata",73663} };

    cout<<"before sort;"<<"\n";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i].empid<<" "<<nums[i].companyname<<" "<<nums[i].location<<" "<<nums[i].pincode<<"\n";
    }

    sort(nums.begin(),nums.end(),compare);

    cout<<"after sort;"<<"\n";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i].empid<<" "<<nums[i].companyname<<" "<<nums[i].location<<" "<<nums[i].pincode<<"\n";
    }

    return 0;
}