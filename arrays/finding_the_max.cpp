#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7, 8, 9};
    int size = 8;
    
    int min = arr[0];  // assume first is smallest
    
    for(int i = 1; i < size; i++) {
        if(arr[i] < min) {   // found smaller?
            min = arr[i];    // update min
        }
    }
    
    cout << "Smallest number: " << min << endl;
    return 0;
}
```

