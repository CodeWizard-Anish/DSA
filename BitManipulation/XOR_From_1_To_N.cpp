/*
Problem:
Find XOR of all numbers from 1 to N.

Example:

Input:
N = 5

Output:
1

Pattern Learned:
XOR Pattern

Concepts:
- Mathematical Pattern
- Modulo 4

Expected Complexity:
Time: O(1)
Space: O(1)
*/

#include <iostream>
using namespace std;

int main(){

    int n = 5;

    // TODO:
    // Find XOR from 1 to n
    int result;
    if (n % 4 == 0) {
        result = n;
    } else if (n % 4 == 1) {
        result = 1;
    } else if (n % 4 == 2) {
        result = n + 1;
    } else {
        result = 0;
    }
    cout << result << endl;

    return 0;
}