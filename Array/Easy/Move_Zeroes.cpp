/*
Problem:
Move all zeroes to the end while maintaining
the relative order of non-zero elements.

Example:
Input:
[1,0,2,0,3,4]

Output:
[1,2,3,4,0,0]

Pattern Learned:
Two Pointers

Concepts:
- Swapping
- Stable Rearrangement

Expected Complexity:
Time: O(n)
Space: O(1)
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {1,0,2,0,3,4};

    int j = -1;

    // TODO:
    // Find first zero
    // Move non-zero elements forward using swapping

    for(int x : nums){
        cout << x << " ";
    }

    return 0;
}