#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0; // position for next non-zero

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main() {
    vector<int> nums = {34,56,0,0,87};

    moveZeroes(nums);

    for(int x : nums) {
        cout << x << " ";
    }

    return 0;
}
