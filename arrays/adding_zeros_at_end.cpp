#include <iostream>
#include <vector>
using namespace std;

int main() {

    int arr[] = {12,43,0,23,453,45};
    int size = 6;

    int count = 0;
    vector<int> result;

    // Step 1: Traverse and separate
    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            count++;
        } else {
            result.push_back(arr[i]);
        }
    }

    // Step 2: Add zeros at the end
    for(int j = 0; j < count; j++){
        result.push_back(0);
    }

    // Step 3: Print result
    for(int x : result){
        cout << x << " ";
    }

    return 0;
}
