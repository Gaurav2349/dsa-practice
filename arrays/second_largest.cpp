#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = 6;
    
    int first = INT_MIN;   // largest
    int second = INT_MIN;  // second largest
    
    for (int i = 0; i < size; i++) {
        
        // found new largest?
        if (arr[i] > first) {
            second = first;      // old first becomes second
            first = arr[i];      // update first
        }
        // found new second largest?
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    
    cout << "Second largest: " << second << endl;
    return 0;
}
