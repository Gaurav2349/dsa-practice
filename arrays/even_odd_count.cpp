#include <iostream>
using namespace std;

int main() {
    int even_count = 0;
    int odd_count = 0;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            even_count = even_count + 1;
        } else {
            odd_count = odd_count + 1;
        }
    }
    
    cout << "Even count: " << even_count << endl;
    cout << "Odd count: "  << odd_count  << endl;
    return 0;
}
