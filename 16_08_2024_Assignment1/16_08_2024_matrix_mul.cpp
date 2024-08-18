#include<bits/stdc++.h>
using namespace std;

int main(){

    int length;
    cout<<"enter the vector(1) length:"<<"\n";
    cin>>length;

    int mt;
    cout<<"enter the matrixA(size):"<<"\n";
    cin>>mt;


    int length1;
    cout<<"enter the vector(2) length:"<<"\n";
    cin>>length1;

    int mt1;
    cout<<"enter the matrixB(size):"<<"\n";
    cin>>mt1;
    



    vector<vector<int>> MatA(length,vector<int>(mt));
    vector<vector<int>> MatB(length1,vector<int>(mt1));

    int r1=MatA.size();
    int r2=MatB.size();
    int c1=MatA[0].size();
    int c2=MatB[0].size();

    vector<vector<int>> MatC(r1,vector<int>(c2));

    if(c1!=r2){
        cout<<"matrix multiplication not possible"<<"\n";
    }

    else{

        cout<<"enter the matrix(matA values):"<<"\n";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cin>>MatA[i][j];
            }
        }

        cout<<"enter the matrix(matB values):"<<"\n";
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                cin>>MatB[i][j];
            }
        }

        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<c1;k++){
                    MatC[i][j]+=MatA[i][k]*MatB[k][j];
                }
            }
        }

        cout<<"MatC:"<<"\n";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                cout<<MatC[i][j]<<" ";
            }
            cout<<"\n";
        }

    }
    return 0;
}