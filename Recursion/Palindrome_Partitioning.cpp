/*
Problem:
Partition string into palindromes.

Example:

Input:
"aab"

Output:
["a","a","b"]
["aa","b"]

Pattern Learned:
Backtracking

Concepts:
- Partitioning
- Palindrome checking

Expected Complexity:
Exponential
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(int index,
           string& s,
           vector<string>& current){

    // TODO:

}

int main(){

    string s = "aab";

    vector<string> current;

    solve(0,s,current);

    return 0;
}