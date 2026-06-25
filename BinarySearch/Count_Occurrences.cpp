/*
Problem:
Count occurrences of target.

Example:

Input:
nums = [1,2,2,2,3]
target = 2

Output:
3

Pattern Learned:
Binary Search

Concepts:
- First Occurrence
- Last Occurrence

Expected Complexity:
Time: O(log n)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {1,2,2,2,3};
    int target = 2;

    // TODO:
    // Count Occurrences Logic
    int left = 0;
    int right = nums.size() - 1;
    int first_occurrence = -1;
    int last_occurrence = -1;

    // Find first occurrence
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            first_occurrence = mid;
            right = mid - 1; // Continue searching in the left half
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Find last occurrence
    left = 0;
    right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            last_occurrence = mid;
            left = mid + 1; // Continue searching in the right half
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Count occurrences
    int count = (last_occurrence != -1) ? last_occurrence - first_occurrence + 1 : 0;
    cout << count << endl;

    return 0;
}