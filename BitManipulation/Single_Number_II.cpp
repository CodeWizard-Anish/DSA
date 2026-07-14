/*
Problem:
Find the element that appears once while every other element appears three times.

Example:

Input:
[2,2,3,2]

Output:
3

Pattern Learned:
Bit Counting

Concepts:
- Count bits
- Modulo 3

Expected Complexity:
Time: O(32*n)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {2,2,3,2};

    // TODO:
    // Count every bit position
    int result = 0;
    for (int i = 0; i < 32; i++) {
        int sum = 0;
        for (int num : nums) {
            sum += (num >> i) & 1; // Count set bits at position i
        }
        if (sum % 3 != 0) {
            result |= (1 << i); // Set the bit in result
        }
    }
    cout << result << endl;

    return 0;
}