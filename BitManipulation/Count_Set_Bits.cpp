/*
Problem:
Count number of set bits.

Example:

Input:
13

Output:
3

Pattern Learned:
Bit Counting

Concepts:
- Brian Kernighan Algorithm

Expected Complexity:
Time: O(number of set bits)
Space: O(1)
*/

#include <iostream>
using namespace std;

int main(){

    int n = 13;

    // TODO:
    // Count set bits
    int count = 0;
    while (n) {
        n &= (n - 1); // Remove last set bit
        count++;
    }
    cout << count << endl;

    return 0;
}