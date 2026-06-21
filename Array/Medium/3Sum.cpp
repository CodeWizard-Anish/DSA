/*
Problem:
Find all unique triplets whose sum is 0.

Example:
Input:
[-1,0,1,2,-1,-4]

Output:
[-1,-1,2]
[-1,0,1]

Pattern Learned:
Sorting + Two Pointers

Concepts:
- Duplicate handling
- Fixed pointer + two pointers

Expected Complexity:
Time: O(n²)
Space: O(1) excluding answer
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> nums = {-1,0,1,2,-1,-4};

    sort(nums.begin(), nums.end());

    // TODO:
    // Fix one element
    // Use left and right pointers

    return 0;
}