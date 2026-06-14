/*
Problem:
Find the length of the longest sequence of consecutive integers.

Input:
nums = {100, 4, 200, 1, 3, 2}

Output:
4

Explanation:
Sequence = {1, 2, 3, 4}

Concept:
unordered_set

Expected Complexity:
Time: O(n)
Space: O(n)
*/
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    unordered_set<int> st;

    // TODO:
    // Insert all numbers into set

    int longest = 0;

    // TODO:
    // For each number
    // Check if it's the start of a sequence
    // Expand sequence length
    // Update longest

    cout << longest;

    return 0;
}