/*
Problem:
Check whether kth bit is set.

Example:

Input:
n = 13
k = 2

Output:
true

Pattern Learned:
Bit Mask

Concepts:
- Left Shift
- AND

Expected Complexity:
Time: O(1)
Space: O(1)
*/

#include <iostream>
using namespace std;

int main(){

    int n = 13;
    int k = 2;

    // TODO:
    // Check kth bit
    if (n & (1 << k)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}