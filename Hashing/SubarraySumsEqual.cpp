/*
Problem:
Count the number of subarrays whose sum equals K.

Input:
nums = {1, 2, 3}
k = 3

Output:
2

Explanation:
Subarrays = {1,2} and {3}

Concept:
Prefix Sum + Hash Map

Expected Complexity:
Time: O(n)
Space: O(n)
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3};
    int k = 3;

    unordered_map<int, int> mp;

    // prefixSum -> frequency

    int prefix = 0;
    int count = 0;

    mp[0] = 1;

    // TODO:
    // Traverse array
    // Update prefix
    // Check if prefix-k exists
    // Add frequency to count
    // Store current prefix

    cout << count;

    return 0;
}