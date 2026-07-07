/*
Problem:
Generate unique permutations.

Example:

Input:
[1,1,2]

Output:
[1,1,2]
[1,2,1]
[2,1,1]

Pattern Learned:
Backtracking

Concepts:
- Duplicate handling

Expected Complexity:
O(n!)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(vector<int>& nums,
           vector<int>& current,
           vector<int>& used){

    // TODO:

}

int main(){

    vector<int> nums = {1,1,2};

    sort(nums.begin(), nums.end());

    vector<int> current;

    vector<int> used(nums.size(),0);

    solve(nums,current,used);

    return 0;
}