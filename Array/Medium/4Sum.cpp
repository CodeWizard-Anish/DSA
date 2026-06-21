/*
Problem:
Find all unique quadruplets with given target sum.

Example:
Input:
[1,0,-1,0,-2,2]
target = 0

Output:
[-2,-1,1,2]
[-2,0,0,2]
[-1,0,0,1]

Pattern Learned:
Extended Two Pointers

Concepts:
- Nested fixing
- Duplicate handling

Expected Complexity:
Time: O(n³)
Space: O(1)
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;

    sort(nums.begin(), nums.end());

    // TODO:
    // Fix first element
    // Fix second element
    // Use two pointers

    return 0;
}