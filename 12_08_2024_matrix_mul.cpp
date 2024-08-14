#include<bits/stdc++.h>
using namespace std;

int main(){

   vector<vector<int>> MatA{
    {2,3,8},
    {4,6,5},
    {9,8,7}
   };

   vector<vector<int>> MatB{
    {1,3,5},
    {3,5,7},
    {5,7,9}
   };

   int r1=MatA.size(),r2=MatB.size();
   int c1=MatA[0].size(),c2=MatB[0].size();

   vector<vector<int>> MatC(r1,vector<int>(c2));

   for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        for(int k=0;k<r2;k++){
            MatC[i][j]+=MatA[i][k]*MatB[k][j];
        }
    }
   }

   int n=3;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<MatC[i][j]<<" ";
    }
    cout<<"\n";
   }

   return 0;
}