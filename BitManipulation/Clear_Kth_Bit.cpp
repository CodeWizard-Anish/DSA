/*
Problem:
Clear kth bit.

Example:

Input:
n = 15
k = 2

Output:
11

Pattern Learned:
Bit Mask

Concepts:
- AND
- NOT

Expected Complexity:
Time: O(1)
Space: O(1)
*/

#include <iostream>
using namespace std;

int main(){

    int n = 15;
    int k = 2;

    // TODO:
    // Clear kth bit
    int result = n & ~(1 << k);
    cout << result << endl;

    return 0;
}