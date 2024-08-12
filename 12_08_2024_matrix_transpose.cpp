#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<vector<int>> nums { {3,9,2},{4,8,6},{7,11,1} };

    for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums[i].size();j++){
            if(nums[i]!=nums[j]){
                 cout<<nums[j][i]=nums[i][j];
            }
        }
    }

    return 0;

}