/*
Problem:
Print binary representation of a decimal number.

Example:

Input:
13

Output:
1101

Pattern Learned:
Bit Manipulation

Concepts:
- Binary conversion
- Division by 2

Expected Complexity:
Time: O(log n)
Space: O(log n)
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    int n = 13;

    // TODO:
    // Convert decimal to binary string
    string binary = "";
    while (n > 0) {
        binary += to_string(n % 2);
        n /= 2;
    }
    reverse(binary.begin(), binary.end());

    // TODO:
    // Print binary representation
    cout << binary << endl;

    return 0;
}