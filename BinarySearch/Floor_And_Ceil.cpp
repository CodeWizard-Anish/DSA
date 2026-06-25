/*
Problem:
Find floor and ceil of target.

Example:

Input:
nums = [1,2,4,6,8]
target = 5

Output:
Floor = 4
Ceil = 6

Pattern Learned:
Binary Search

Concepts:
- Nearest Smaller
- Nearest Greater

Expected Complexity:
Time: O(log n)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {1,2,4,6,8};
    int target = 5;

    // TODO:
    // Floor and Ceil Logic
    int left = 0;
    int right = nums.size() - 1;
    int mid = left + (right - left) / 2;
    int floor = -1;
    int ceil = -1;

    while (left <= right) {
        if (nums[mid] < target) {
            floor = mid;
            left = mid + 1;
        } else if (nums[mid] > target) {
            ceil = mid;
            right = mid - 1;
        } else {
            floor = mid;
            ceil = mid;
            break;
        }
        mid = left + (right - left) / 2;
    }

    cout << "Floor: " << floor << endl;
    cout << "Ceil: " << ceil << endl;

    return 0;
}