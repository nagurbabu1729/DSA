#include<bits/stdc++.h>
using namespace std;

int main(){
    
    
    int rows1;
    cout<<"enter the number of r1:"<<"\n";
    cin>>rows1;


    int col1;
    cout<<"enter the number of c1:"<<"\n";
    cin>>col1;
    
    int rows2;
    cout<<"enter the number of r2:"<<"\n";
    cin>>rows2;


    int col2;
    cout<<"enter the number of c2:"<<"\n";
    cin>>col2;
    
   
    
   vector<vector<int>>MatA(rows1,vector<int>(col1));
   vector<vector<int>>MatB(rows2,vector<int>(col2));
   
    int r1=MatA.size();
   int r2=MatB.size();
   int c1=MatA[0].size();
   int c2=MatB[0].size();
   
   vector<vector<int>>MatC(r1,vector<int>(c2));
   
   
   
   if(r1!=r2 or c1!=c2){
       cout<<"matrix addition is not possible";
   }
   
   else{
       
       for(int i=0;i<r1;i++){
           for(int j=0;j<c1;j++){
               cin>>MatA[i][j];
           }
       }
       
       for(int i=0;i<r2;i++){
           for(int j=0;j<c2;j++){
               cin>>MatB[i][j];
           }
       }
       
       for(int i=0;i<r1;i++){
           for(int j=0;j<c2;j++){
              MatC[i][j]=MatA[i][j]+MatB[i][j];
              cout<<MatC[i][j]<<" ";
           }
       }
       
   }
    return 0;
}