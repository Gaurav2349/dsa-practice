#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};
    
    vector<int> vi(10);           // 10 zeros
    vector<int> vii = {4,12,34,53};

    // Print v
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // Print vi
    for(int x : vi) {
        cout << x << " ";
    }
    cout << endl;

    // Print vii
    for(int x : vii) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
