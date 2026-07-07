/*
Problem:
Generate all permutations.

Example:

Input:
[1,2,3]

Output:
[1,2,3]
[1,3,2]
[2,1,3]
[2,3,1]
[3,1,2]
[3,2,1]

Pattern Learned:
Backtracking

Concepts:
- Used array
- Position filling

Expected Complexity:
O(n!)
*/

#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& nums,
           vector<int>& current,
           vector<int>& used){

    // TODO:

}

int main(){

    vector<int> nums = {1,2,3};

    vector<int> current;

    vector<int> used(nums.size(),0);

    solve(nums,current,used);

    return 0;
}