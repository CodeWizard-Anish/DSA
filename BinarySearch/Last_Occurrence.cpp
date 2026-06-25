/*
Problem:
Find last occurrence of target.

Example:

Input:
nums = [1,2,2,2,3]
target = 2

Output:
3

Pattern Learned:
Binary Search

Concepts:
- Right Bias Search

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
    // Last Occurrence Logic
    int left = 0;
    int right = nums.size() - 1;
    int last_occurrence = -1;

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

    cout << last_occurrence << endl;

    return 0;
}