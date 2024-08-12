#include<bits/stdc++.h>
using namespace std;

static bool compare(pair<int,pair<string,int>>a, pair<int,pair<string,int>> b){
    if(a.second.first>b.second.first){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    
    vector<pair<int,pair<string,int>>>nums{ {1,{"akash",500}},{2,{"nayan",600}},{3,{"nagurbabu",900}},{4,{"ap",1500}} };
   
    cout<<nums[0].first<<"\n";

    nums[3]={5,{"haritha",1900}};

    cout<<nums[3].first<<"\n";
    
    sort(nums.begin(),nums.end(),compare);

    for(auto&b:nums){
        cout<<b.first<<","<<b.second.first<<" "<<b.second.second<<"\n";
    }

    
    return 0;

}