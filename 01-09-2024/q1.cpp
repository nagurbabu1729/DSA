
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"enter the n value:"<<"\n";
    cin>>n;


    vector<int> vt;

    int rt=sqrt(n);

    for(int i=1;i<=rt;i++){
        if(n%i==0){
            vt.push_back(i);
            vt.push_back(n/i);
        }
    }

    if(rt*rt==n){
        vt.pop_back();
    }

    sort(vt.begin(),vt.end());

    for(int i=0;i<vt.size();i++){
        cout<<vt[i]<<" ";
    }
    
    return 0;
}