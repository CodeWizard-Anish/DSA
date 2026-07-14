/*
Problem:
Find the missing number from 0 to n.

Example:

Input:
[3,0,1]

Output:
2

Pattern Learned:
XOR

Concepts:
- XOR
- Missing Number

Expected Complexity:
Time: O(n)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {3,0,1};

    // TODO:
    // Find missing number
    int n = nums.size();
    int xorAll = 0;
    for (int i = 0; i <= n; i++) {
        xorAll ^= i; // XOR all numbers from 0 to n
    }
    int xorNums = 0;
    for (int num : nums) {
        xorNums ^= num; // XOR all numbers in the array
    }
    int missingNumber = xorAll ^ xorNums; // XOR of both gives the missing number
    cout << missingNumber << endl;

    return 0;
}