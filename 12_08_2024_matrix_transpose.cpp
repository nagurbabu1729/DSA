#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>> n { {3,9,2},{4,8,6},{7,11,1} };

    for(int i=0;i<n.size();i++){
        for(int j=i;j<n.size();j++){
            if(i!=j){
                 swap(n[i][j],n[j][i]);
            }
        }
    }

    for(auto& tr:n){
        for(auto& tr1:tr){
            cout<<tr1<<" ";
        }
    }
    
    
}