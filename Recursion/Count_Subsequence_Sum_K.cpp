/*
Problem:
Count subsequences having sum K.

Example:

Input:
[1,2,1]
k=2

Output:
2

Pattern Learned:
Recursion Returning Values

Concepts:
- Count ways

Expected Complexity:
Time: O(2^n)
Space: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

int countWays(int index,
              vector<int>& nums,
              int sum,
              int k){

    // TODO:

}

int main(){

    vector<int> nums = {1,2,1};

    int k = 2;

    cout << countWays(0, nums, 0, k);

    return 0;
}