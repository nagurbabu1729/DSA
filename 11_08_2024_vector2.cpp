#include<bits/stdc++.h>
using namespace std;


static bool compare(pair<int,int>a,pair<int,int>b){
    if(a.second>b.second){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    
    vector<pair<int,int>>a { {12,99}, {8,9}, {2,43},{66,12} };

    //cout<<a[0].first<<"\n";
    //cout<<a[0].second<<"\n";
    //cout<<a[1].first<<"\n";
    //cout<<a[1].second;

    a[2]={1,1};

   // cout<<a[2].first<<"\n";
   // cout<<a[2].second;

    sort(a.begin(),a.end(),compare);

    for(auto&b:a){
        cout<<b.first<<","<<b.second<<"\n";
    }

}