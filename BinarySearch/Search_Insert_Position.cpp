/*
Problem:
Find insert position of target.

Example:

Input:
nums = [1,3,5,6]
target = 2

Output:
1

Pattern Learned:
Binary Search

Concepts:
- Lower Bound Application

Expected Complexity:
Time: O(log n)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {1,3,5,6};
    int target = 2;

    // TODO:
    // Search Insert Logic
    int left = 0;
    int right = nums.size() - 1;
    int mid = left + (right - left) / 2;
    int insert_position = nums.size(); // Default to size if target is greater than all elements

    while (left <= right) {
        if (nums[mid] >= target) {
            insert_position = mid; // Update insert position
            right = mid - 1; // Search in the left half
        } else {
            left = mid + 1; // Search in the right half
        }
        mid = left + (right - left) / 2;
    }

    cout << insert_position;

    return 0;
}