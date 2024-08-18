#include<bits/stdc++.h>
using namespace std;

struct Laptop {
    int id;
    string name;
    int cost;
};

int main() {
    unordered_map<string, int> mp;
    mp["lenovo"] = 10;
    mp["dell"] = 20;
    mp["hp"] = 30;

    auto compare = [&mp] (Laptop* l1, Laptop* l2) {
        if (l1->cost != l2->cost) {
            return l1->cost < l2->cost;
        } else {
            return mp[l1->name] < mp[l2->name];
        }
    };

    priority_queue<Laptop*, vector<Laptop*>, decltype(compare)> pq(compare);

    pq.push(new Laptop{1, "lenovo", 500});
    pq.push(new Laptop{2, "dell", 1500});
    pq.push(new Laptop{3, "hp", 1500});

    cout << "TOP ELEMENT IS " << pq.top()->name;
    
    return 0;
}

