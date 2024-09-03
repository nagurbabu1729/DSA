#include<bits/stdc++.h>
using namespace std;

int main(){

    int rows;
    cout<<"enter the number of rows:"<<"\n";
    cin>>rows;


    int columns;
    cout<<"enter the number of columns:"<<"\n";
    cin>>columns;

    if(rows<=0 or columns<=0){
        cout<<"matrix transpose is not possible"<<"\n";
        return 0;
    }
    
    if(rows!=columns){
        cout<<"matrix transpose is not possible"<<"\n";
        return 0;
    }

    vector<vector<int>> mt(rows,vector<int>(columns));

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>mt[i][j];
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=i;j<columns;j++){
            if(i!=j){
                swap(mt[i][j],mt[j][i]);
            }
        }
    }

    for(auto& tr:mt){
        for(auto& tr1:tr){
            cout<<tr1<<" ";
        }
        cout<<"\n";
    }

    return 0;
}