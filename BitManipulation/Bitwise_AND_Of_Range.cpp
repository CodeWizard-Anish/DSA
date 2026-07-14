/*
Problem:
Find bitwise AND of all numbers in a given range.

Example:

Input:
left = 5
right = 7

Output:
4

Pattern Learned:
Common Prefix

Concepts:
- Right Shift
- Binary Prefix

Expected Complexity:
Time: O(log n)
Space: O(1)
*/

#include <iostream>
using namespace std;

int main(){

    int left = 5;
    int right = 7;

    // TODO:
    // Find common binary prefix
    int shift = 0;
    while (left < right) {
        left >>= 1; // Right shift left
        right >>= 1; // Right shift right
        shift++; // Count shifts
    }
    left <<= shift; // Left shift left by the number of shifts.
    
    cout << left << endl;

    return 0;
}