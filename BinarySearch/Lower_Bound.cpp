/*
Problem:
Find first index where element >= target.

Example:

Input:
nums = [1,2,4,4,5]
target = 4

Output:
2

Pattern Learned:
Binary Search

Concepts:
- Lower Bound

Expected Complexity:
Time: O(log n)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {1,2,4,4,5};
    int target = 4;

    // TODO:
    // Lower Bound Logic
    int left = 0;
    int right = nums.size() - 1;
    int mid = left + (right - left) / 2;
    int lower_bound_index = -1; // Initialize to -1 to indicate not found

    while (left <= right) {
        if (nums[mid] >= target) {
            lower_bound_index = mid; // Update lower bound index
            right = mid - 1; // Search in the left half
        } else {
            left = mid + 1; // Search in the right half
        }
        mid = left + (right - left) / 2;
    }

    cout << lower_bound_index;

    return 0;
}