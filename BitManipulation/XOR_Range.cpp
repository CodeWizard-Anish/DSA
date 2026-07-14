/*
Problem:
Find XOR of numbers in range [L, R].

Example:

Input:
L = 4
R = 8

Output:
8

Pattern Learned:
Prefix XOR

Concepts:
- XOR from 1 to N
- XOR Cancellation

Expected Complexity:
Time: O(1)
Space: O(1)
*/

#include <iostream>
using namespace std;

int main(){

    int left = 4;
    int right = 8;

    // TODO:
    // Find XOR in range
    auto xorFrom1ToN = [](int n) {
        if (n % 4 == 0) return n;
        if (n % 4 == 1) return 1;
        if (n % 4 == 2) return n + 1;
        return 0;
    };

    int result = xorFrom1ToN(right) ^ xorFrom1ToN(left - 1);
    cout << result << endl;

    return 0;
}