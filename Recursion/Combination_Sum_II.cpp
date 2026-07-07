/*
Problem:
Find unique combinations summing to target.

Example:

Input:
[10,1,2,7,6,1,5]
target = 8

Output:
[1,1,6]
[1,2,5]
[1,7]
[2,6]

Pattern Learned:
Backtracking

Concepts:
- Duplicates
- Sorting

Expected Complexity:
Exponential
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int index,
           vector<int>& nums,
           vector<int>& current,
           int target){

    // TODO:

}

int main(){

    vector<int> nums = {10,1,2,7,6,1,5};

    int target = 8;

    sort(nums.begin(), nums.end());

    vector<int> current;

    solve(0, nums, current, target);

    return 0;
}