/*
Problem:
Generate all subsequences of an array.

Example:

Input:
[1,2,3]

Output:
[]
[1]
[2]
[3]
[1,2]
[1,3]
[2,3]
[1,2,3]

Pattern Learned:
Pick / Not Pick

Concepts:
- Recursion tree
- Backtracking

Expected Complexity:
Time: O(2^n)
Space: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

void generate(int index,
              vector<int>& nums,
              vector<int>& current){

    // TODO:
    // Base case

    // TODO:
    // Pick

    // TODO:
    // Not Pick
}

int main(){

    vector<int> nums = {1,2,3};

    vector<int> current;

    generate(0, nums, current);

    return 0;
}