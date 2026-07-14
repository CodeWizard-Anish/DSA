/*
Problem:
Find the element that appears only once.

Example:

Input:
[2,2,1]

Output:
1

Pattern Learned:
XOR

Concepts:
- XOR Cancellation

Expected Complexity:
Time: O(n)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {2,2,1};

    // TODO:
    // Find unique number
    int unique = 0;
    for (int num : nums) {
        unique ^= num; // XOR all numbers
    }
    cout << unique << endl;

    return 0;
}