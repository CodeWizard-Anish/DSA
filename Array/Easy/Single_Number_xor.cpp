/*
Problem:
Every element appears twice except one.
Find that unique element.

Example:
Input:
[4,1,2,1,2]

Output:
4

Pattern Learned:
Bit Manipulation

Concepts:
- XOR Properties

Expected Complexity:
Time: O(n)
Space: O(1)
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {4,1,2,1,2};

    int xr = 0;

    // TODO:
    // XOR all elements
    for(int i=0;i<nums.size();i++){
        xr = xr ^ nums[i];
    }

    cout << xr;

    return 0;
}