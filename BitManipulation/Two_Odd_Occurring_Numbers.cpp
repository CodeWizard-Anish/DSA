/*
Problem:
Find the two numbers occurring odd number of times.

Example:

Input:
[4,2,4,5,2,3,3,1]

Output:
5 1

Pattern Learned:
Bit Partitioning

Concepts:
- XOR
- Rightmost Set Bit

Expected Complexity:
Time: O(n)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {4,2,4,5,2,3,3,1};

    // TODO:
    // Find two odd occurring numbers
    int xorAll = 0;
    for (int num : nums) {
        xorAll ^= num; // XOR all numbers
    }
    // Find the rightmost set bit in xorAll
    int rightmostSetBit = xorAll & ~(xorAll-1);

    int num1 = 0, num2 = 0;
    for (int num : nums) {
        if (num & rightmostSetBit) {
            num1 ^= num; // XOR all numbers with the rightmost set bit
        } else {
            num2 ^= num; // XOR all numbers without the rightmost set bit
        }
    }

    cout << num1 << " " << num2 << endl;

    return 0;
}