#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    
    for(int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    
    cout << "Sum: " << sum << endl;
    return 0;
}
