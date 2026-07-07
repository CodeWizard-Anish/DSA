/*
Problem:
Find all combinations whose sum equals target.

Example:

Input:
nums = [2,3,6,7]
target = 7

Output:
[2,2,3]
[7]

Pattern Learned:
Backtracking

Concepts:
- Reuse same element
- Target reduction

Expected Complexity:
Exponential
*/

#include <iostream>
#include <vector>
using namespace std;

void solve(int index,
           vector<int>& nums,
           vector<int>& current,
           int target){

    // TODO:

}

int main(){

    vector<int> nums = {2,3,6,7};

    int target = 7;

    vector<int> current;

    solve(0, nums, current, target);

    return 0;
}