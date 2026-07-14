/*
Problem:
Generate all subsets using bit masking.

Example:

Input:
[1,2,3]

Output:
[]
[1]
[2]
[3]
[1,2]
[1,3]
[2,3]
[1,2,3]

Pattern Learned:
Bit Masking

Concepts:
- Binary Representation
- Mask Traversal

Expected Complexity:
Time: O(n * 2^n)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {1,2,3};

    // TODO:
    // Generate subsets using bit masks
    int n = nums.size();
    for (int mask = 0; mask < (1 << n); mask++) {
        vector<int> subset;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) { // Check if the ith bit is set
                subset.push_back(nums[i]);
            }
        }
        // Print the current subset
        cout << "[";
        for (size_t j = 0; j < subset.size(); j++) {
            cout << subset[j];
            if (j < subset.size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }   

    return 0;
}