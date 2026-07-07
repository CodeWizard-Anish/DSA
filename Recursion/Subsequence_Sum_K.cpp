/*
Problem:
Print all subsequences whose sum equals K.

Example:

Input:
nums = [1,2,1]
k = 2

Output:
[1,1]
[2]

Pattern Learned:
Backtracking

Concepts:
- Running sum
- Pick / Not Pick

Expected Complexity:
Time: O(2^n)
Space: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

void solve(int index,
           vector<int>& nums,
           vector<int>& current,
           int sum,
           int k){

    // TODO:
    // Base case

    // TODO:
    // Pick

    // TODO:
    // Not Pick
}

int main(){

    vector<int> nums = {1,2,1};

    int k = 2;

    vector<int> current;

    solve(0, nums, current, 0, k);

    return 0;
}