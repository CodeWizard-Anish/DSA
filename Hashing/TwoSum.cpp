/*
Problem:
Given an array and a target value, find two indices
such that their elements add up to the target.

Input:
nums = {2, 7, 11, 15}
target = 9

Output:
0 1

Concept:
Hash Map

Expected Complexity:
Time: O(n)
Space: O(n)
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    unordered_map<int, int> mp;

    // TODO:
    // For each element
    // Find complement = target - nums[i]
    // Check if complement exists in map
    // If yes, print indices
    // Else store current element and index

    return 0;
}