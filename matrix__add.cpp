#include <iostream>
using namespace std;

int main() {
    int test[2][4] = {{2,-5,4,6},{4,0,5,9}};

    // use of nested for loop
    // access rows of the array
    for (int i = 0; i < 2; ++i) {

        // access columns of the array
        for (int j = 0; j < 4; ++j) {
            cout  << test[i][j]<<" ";
        }
    }

    return 0;
}