/*
Problem:
Set kth bit.

Example:

Input:
n = 10
k = 1

Output:
10

Pattern Learned:
Bit Mask

Concepts:
- OR
- Left Shift

Expected Complexity:
Time: O(1)
Space: O(1)
*/

#include <iostream>
using namespace std;

int main(){

    int n = 10;
    int k = 1;

    // TODO:
    // Set kth bit
    int result = n | (1 << k);
    cout << result << endl;

    return 0;
}