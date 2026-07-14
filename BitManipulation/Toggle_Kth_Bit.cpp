/*
Problem:
Toggle kth bit.

Example:

Input:
10
1

Output:
8

Pattern Learned:
Bit Mask

Concepts:
- XOR

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
    // Toggle kth bit
    int result = n ^ (1 << k);
    cout << result << endl;

    return 0;
}