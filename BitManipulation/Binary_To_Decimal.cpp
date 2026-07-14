/*
Problem:
Convert binary string to decimal.

Example:

Input:
10110

Output:
22

Pattern Learned:
Bit Manipulation

Concepts:
- Power of 2
- Binary parsing

Expected Complexity:
Time: O(n)
Space: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    string binary = "10110";

    // TODO:
    // Convert binary to decimal
    int decimal = 0;
    int length = binary.length();
    for (int i = 0; i < length; i++) {
        if (binary[length - 1 - i] == '1') {
            decimal += (1 << i); // 2^i
        }
    }
    cout << decimal << endl;

    return 0;
}