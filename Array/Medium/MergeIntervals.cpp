/*
Problem:
Merge overlapping intervals.

Example:
Input:
[[1,3],[2,6],[8,10],[15,18]]

Output:
[[1,6],[8,10],[15,18]]

Pattern Learned:
Sorting + Greedy

Concepts:
- Interval merging
- Range expansion

Expected Complexity:
Time: O(n log n)
Space: O(n)
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<vector<int>> intervals = {
        {1,3},
        {2,6},
        {8,10},
        {15,18}
    };

    // TODO:
    // Sort intervals
    // Merge overlaps

    return 0;
}