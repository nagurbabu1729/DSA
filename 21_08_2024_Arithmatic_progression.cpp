#include<bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cout<<"enter n value:";
   cin>>n;

    vector<int>nums(n);

    cout<<"enter the numbers:"<<"\n";
    for(int i=0;i<nums.size();i++){
        cin>>nums[i];
    }

    int d=nums[1]-nums[0];

    for(int i=0;i<n;i++){
        if(nums[i]-nums[i-1]!=d){
            cout<<"in ap";
            break;
        }
        cout<<"not in ap";
        break;
    }

    return 0;
}