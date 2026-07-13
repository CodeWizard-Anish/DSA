/*
Problem:
Generate phone keypad combinations.

Example:

Input:
"23"

Output:
ad ae af bd be bf cd ce cf

Pattern Learned:
Backtracking

Concepts:
- Decision tree
- String building

Expected Complexity:
O(4^n)
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(int index,
           string& digits,
           string current,
           vector<string>& keypad){

    // TODO:

}

int main(){

    string digits = "23";

    vector<string> keypad = {

        "",

        "",

        "abc",

        "def",

        "ghi",

        "jkl",

        "mno",

        "pqrs",

        "tuv",

        "wxyz"

    };

    solve(0,digits,"",keypad);

    return 0;
}