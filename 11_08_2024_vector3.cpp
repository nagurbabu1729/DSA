#include<bits/stdc++.h>
using namespace std;

static bool compare(pair<int,pair<int,int>>a, pair<int,pair<int,int>> b){
    if(a.second.second>b.second.second){
        return true;
    }
    else{
        return false;
    }
}


int main(){
  
    
    vector<pair<int,pair<int,int>>> nums { {12,{99,45}}, {8,{9,12}}, {2,{43,20}}, {66,{12,89}}  };
     
    //changing index 2 values 
    nums[2]={12,{13,14}};

    cout<<"before sort:"<<"\n";
    for(auto&tr:nums){
     cout<<tr.first<<" "<<tr.second.first<<" "<<tr.second.second<<"\n";
   }

   
    sort(nums.begin(),nums.end(),compare);

    cout<<"after sort:"<<"\n";
    for(auto&tr:nums){
     cout<<tr.first<<" "<<tr.second.first<<" "<<tr.second.second<<"\n";
   }


}