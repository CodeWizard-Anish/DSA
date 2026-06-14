/*
Problem:
Count the number of subarrays having XOR equal to K.

Input:
nums = {4, 2, 2, 6, 4}
k = 6

Output:
4

Concept:
Prefix XOR + Hash Map

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