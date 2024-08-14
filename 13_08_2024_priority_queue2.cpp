#include<bits/stdc++.h>
using namespace std;


struct School{

    int id;
    string name;
    string skin_color;
    int height;
};

struct Compare{
    bool operator()(School s1,School s2){
        return s1.height<s2.height;
    }
};


int main(){

    priority_queue<School,vector<School>,Compare> pq;

    pq.push({10,"nagur","red",165});
    pq.push({20,"akash","blue",175});
    pq.push({13,"vasanth","white",160});
    pq.push({19,"shivam","black",174});
    pq.push({27,"fahad","golden",170});
    pq.push({60,"faran","violet",184});

    cout<<pq.top().name;

}