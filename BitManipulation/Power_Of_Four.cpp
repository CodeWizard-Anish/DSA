/*
Problem:
Check whether a number is a power of 4.

Example:

Input:
16

Output:
true

Pattern Learned:
Bit Manipulation

Concepts:
- Power of Two
- Bit Mask
- Modulo Property

Expected Complexity:
Time: O(1)
Space: O(1)
*/

#include <iostream>
using namespace std;

int main(){

    int n = 16;

    // TODO:
    // Check if n is power of four
    if (n > 0 && (n & (n - 1)) == 0 && n % 3 == 1) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}