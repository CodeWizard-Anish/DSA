/*
Problem:
Remove last set bit.

Example:

Input:
12

Output:
8

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

    int n = 12;

    // TODO:
    // Remove last set bit
    int result = n & (n - 1);
    cout << result << endl;

    return 0;
}