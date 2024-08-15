#include<bits/stdc++.h>
using namespace std;


int gcd(int num1,int num2){

    if(num1==0){
        cout<<"gcd is:"<<num2<<"\n";
        return 0;
    }

    if(num2==0){
        cout<<"gcd is:"<<num1<<"\n";
        return 0;
    }
    
    int rem=num1%num2;
    while(rem!=0){
        num1=num2;
        num2=rem;
        rem=num1%num2;
    }
    return num2;
}

int main(){

    int g;
    int lcm;

    int num1;
    int num2;

    int n=3;    
    vector<vector<int>> Mt(n,vector<int>(n));
    vector<vector<int>> MatA(n,vector<int>(n));
    vector<vector<int>> MatB(n,vector<int>(n));

    int r1= MatA.size();
    int r2= MatB.size();
    int c1= MatA[0].size();
    int c2= MatB[0].size();

    vector<vector<int>>MatC(r1,vector<int>(c2));


    int choice;

     

    while(choice!=5){
        cout<<"1.gcd\n2.lcm\n3.matrix_transpose\n4.matrix_multiplication\n5.exit\n";

         cout<<"enter the choice:";
         cin>>choice;
         
    
        switch(choice){
            
            case 1:
             

                cout<<"enter the num1:"<<"\n";
                cin>>num1;

                cout<<"enter the num2:"<<"\n";
                cin>>num2;

                g=gcd(num1,num2);
                cout<<"gcd is:"<<g<<"\n";
                break;

            case 2:

                cout<<"enter the num1:"<<"\n";
                cin>>num1;

                cout<<"enter the num2:"<<"\n";
                cin>>num2;

                if(num1==0 and num2==0){
                    cout<<"lcm and gcd is undefined"<<"\n";
                }
                else { 
                if(num1==0 or num2==0){
                    cout<<"lcm is undefined"<<"\n";
                    cout<<"gcd is"<<g<<"\n";
                }
                else{
                    g=gcd(num1,num2);
                    lcm=(num1*num2)/g;
                    cout<<"lcm is:"<<lcm<<"\n";
                }
                }
                break;

            case 3:
               cout<<"enter the matrix values:"<<"\n";

               for(int i=0;i<Mt.size();i++){
                for(int j=0;j<Mt.size();j++){
                    cin>>Mt[i][j];
                }
               }
              
                for(int i=0;i<Mt.size();i++){
                    for(int j=i;j<Mt.size();j++){
                        if(i!=j){
                            swap(Mt[i][j],Mt[j][i]);
                        }
                    }
                }

                for(auto& tr: Mt){
                    for(auto& tr1: tr){
                        cout<< tr1<<" "<<"\n";
                    }
                }
                break;

            case 4:

            cout<<"enter the matrix values:"<<"\n";

               for(int i=0;i<MatA.size();i++){
                for(int j=0;j<MatA.size();j++){
                    cin>>MatA[i][j];
                }
               }

                for(int i=0;i<MatB.size();i++){
                for(int j=0;j<MatB.size();j++){
                    cin>>MatB[i][j];
                }
               }

               
                for(int i=0;i<r1;i++){
                    for(int j=0;j<c2;j++){
                        for(int k=0;k<r2;k++){
                            MatC[i][j]+=MatA[i][k]*MatB[k][j];
                        }
                    }
                }

                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        cout<<MatC[i][j]<<" ";
                    }
                    cout<<"\n";
                }
                break;

            case 5:
                return 0;
            default:
                cout<<"opertaion completed successfully"<<"\n";
        }
    }
    return 0;
}