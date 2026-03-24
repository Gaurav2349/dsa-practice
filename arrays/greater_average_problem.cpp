#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int sum = 0;

    vector<int> result;

    // Step 1: Calculate sum
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    // Step 2: Calculate average
    double avg = (double)sum / size;

    // Step 3: Compare and push
    for(int i = 0; i < size; i++){
        if(arr[i] > avg){
            result.push_back(arr[i]);
        }
    }

    // Step 4: Print result
    for(int x : result){
        cout << x << " ";
    }

    return 0;
}
