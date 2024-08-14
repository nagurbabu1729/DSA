#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int,string> mp;

    mp[1]={"babu"};
    mp[2]={"nagur"};
    mp[3]={"akash"};
    mp[4]={"vasanth"};

    cout<<"\n";


    cout<<mp[1];
    cout<<mp[2];
    cout<<mp[3];
    cout<<mp[4];

    
    for(const auto tr:mp){
        cout<<tr.first<<" "<<tr.second<<"\n";
    }
}