/*
Problem:
Generate all valid parentheses.

Example:

Input:
3

Output:
((()))
(()())
(())()
()(())
()()()

Pattern Learned:
Backtracking

Concepts:
- Open count
- Close count

Expected Complexity:
Catalan Number
*/

#include <iostream>
#include <string>
using namespace std;

void solve(int open,
           int close,
           int n,
           string current){

    // TODO:

}

int main(){

    int n = 3;

    solve(0,0,n,"");

    return 0;
}