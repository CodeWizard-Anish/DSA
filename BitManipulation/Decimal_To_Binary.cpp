/*
Problem:
Convert decimal number into binary.

Example:

Input:
25

Output:
11001

Pattern Learned:
Bit Manipulation

Concepts:
- Remainder
- Reverse string

Expected Complexity:
Time: O(log n)
Space: O(log n)
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    int n = 25;

    // TODO:
    // Convert decimal to binary
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