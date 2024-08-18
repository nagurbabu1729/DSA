#include <bits/stdc++.h>
using namespace std;

struct Human {
    int id;
    string name;
    string car;
};

int main() {
    unordered_map<string, int> mp{{"ferrari", 1000}, {"alto", 800}, {"omni", 800}};

    auto compare = [&mp](Human* h1, Human* h2) {
        if (mp[h1->car] > mp[h2->car]) {
            return true;
        } else if (mp[h1->car] < mp[h2->car]) {
            return false;
        } else {
            return h1->car > h2->car;
        }
        
    };

    priority_queue<Human*, vector<Human*>, decltype(compare)> pq(compare);

    pq.push(new Human{10, "nagur", "ferrari"});
    pq.push(new Human{20, "akash", "alto"});
    pq.push(new Human{13, "vasanth", "omni"});

    while (!pq.empty()) {
        cout << pq.top()->name << "\n";
        pq.pop();
    }

}