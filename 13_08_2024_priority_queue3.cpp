#include<bits/stdc++.h>
using namespace std;



struct Human{

    int id;
    string name;
    string skin_color;
    int height;

};

int main(){

    unordered_map<string,int>mp{{"golden",3},{"red",2},{"black",1}};

    auto compare=[&mp](const Human& h1,const Human& h2){
        return mp[h1.skin_color]<mp[h2.skin_color];
    };

    priority_queue<Human*,vector<Human*>,decltype(compare)> pq(compare);

    pq.push({10,"nagur","golden",165});
    pq.push({20,"akash","red",175});
    pq.push({13,"vasanth","black",160});

    while(!pq.empty()){
        cout<<pq.top().name<<"\n";
        pq.pop();
    }

}
