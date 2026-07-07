/*
Problem:
Choose k numbers from 1-9 whose sum is n.

Example:

Input:
k = 3
n = 7

Output:
[1,2,4]

Pattern Learned:
Backtracking

Concepts:
- Fixed size subset
- Target sum

Expected Complexity:
Exponential
*/

#include <iostream>
#include <vector>
using namespace std;

void solve(int start,
           int k,
           int target,
           vector<int>& current){

    // TODO:

}

int main(){

    int k = 3;
    int target = 7;

    vector<int> current;

    solve(1,k,target,current);

    return 0;
}