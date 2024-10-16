#include <iostream>
using namespace std;

int maxSubArray(int nums[], int size) {
    int current_sum = nums[0];
    int max_sum = nums[0];

    for (int i = 1; i < size; i++) {
        // Manually comparing to decide whether to include the current element in the subarray
        if (current_sum + nums[i] > nums[i]) {
            current_sum = current_sum + nums[i];
        } else {
            current_sum = nums[i];
        }

        // Manually updating the maximum sum found so far
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    return max_sum;
}

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    cout << "The largest sum is: " << maxSubArray(nums, size) << endl;
    return 0;
}
