#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int size = 5;
    int left = 0;
    int right = size - 1;
    bool isPalindrome = true;
    
    while(left < right) {
        if(arr[left] == arr[right]) {
            left++;
            right--;
        } else {
            isPalindrome = false;
            break;  // no need to check further
        }
    }
    
    if(isPalindrome) {
        cout << "YES it is a palindrome" << endl;
    } else {
        cout << "NO it is not a palindrome" << endl;
    }
    
    return 0;
}
