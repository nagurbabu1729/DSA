#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
        int id;
        string name;
        string car;

    Human(int _id,string _name,string _car){
        id=_id;
        name=_name;
        car=_car;
    }

};

int main(){

    unordered_map<int,string> mp{{1000,"ferrari"},{800,"alto"},{800,"omni"}};

    auto compare=[&mp](const Human& h1,Human& h2){
        return mp[h1.car]<mp[h2.car];

    };
    
    priority_queue<Human*,vector<Human*>,decltype(compare)>pq(compare);

    pq.push(new Human(2,"akash","alto"));
    pq.push(new Human(3,"vasanth","omni"));
    pq.push(new Human(1,"nagur","ferrari"));


    cout<<pq.top()->name;
    
}