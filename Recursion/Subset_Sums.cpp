/*
Problem:
Generate sum of every subset.

Example:

Input:
[1,2]

Output:
0 1 2 3

Pattern Learned:
Subsets

Concepts:
- Recursive accumulation

Expected Complexity:
O(2^n)
*/

#include <iostream>
#include <vector>
using namespace std;

void solve(int index,
           vector<int>& nums,
           int sum,
           vector<int>& ans){

    // TODO:

}

int main(){

    vector<int> nums = {1,2};

    vector<int> ans;

    solve(0, nums, 0, ans);

    return 0;
}