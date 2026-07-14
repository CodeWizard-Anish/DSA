/*
Problem:
Check whether number is power of two.

Example:

Input:
16

Output:
true

Pattern Learned:
Bit Trick

Concepts:
- n & (n-1)

Expected Complexity:
Time: O(1)
Space: O(1)
*/

#include <iostream>
using namespace std;

int main(){

    int n = 16;

    // TODO:
    // Check power of two
    if (n > 0 && (n & (n - 1)) == 0) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}