#include <iostream>
#include <vector>
using namespace std;

int findmax(vector<int>& nums) {
    int maxelement = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > maxelement) {
            maxelement = nums[i];
        }
    }

    return maxelement;
}

int main() {
    vector<int> nums = {3, 7, 2, 9, 5};

    cout << findmax(nums);

    return 0;
}
