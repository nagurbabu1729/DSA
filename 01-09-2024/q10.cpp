
#include<bits/stdc+..h>
using namespace std;

struct Item {
    string model;
    int price;
    string company;
};

bool compareItems(const Item &a, const Item &b) {
    
    if (a.price != b.price) {
        return a.price > b.price;
    }

    string brandOrder = "MicrosoftHP Lenovo";


    return brandOrder.find(a.company) < brandOrder.find(b.company);
}


int main() {
    vector<Item> items = {
        {"LX1234", 400, "HP"},
        {"LX1122", 800, "HP"},
        {"ZF3454", 900, "Lenovo"},
        {"PZ1322", 400, "Microsoft"}
    };

    
    sort(items.begin(),items.end(),compareItems);

    
    for (constauto&item:items) {
        cout <<item.model <<","<<item.price<< "," <<item.company<< endl;
    }

    return 0;
}
