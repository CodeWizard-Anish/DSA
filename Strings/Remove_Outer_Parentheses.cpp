/*
Problem:
Remove outermost parentheses from every primitive group.

Example:

Input:
s = "(()())(())"

Output:
"()()()"

Pattern Learned:
Strings

Concepts:
- Balance counting
- Traversal

Expected Complexity:
Time: O(n)
Space: O(n)
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    string s = "(()())(())";

    // TODO:
    // Remove outer parentheses logic
    int balance = 0;
    string result = "";

    for (char c : s) {
        if (c == '(') {
            if (balance > 0) {
                result += c; // Add '(' only if it's not an outer parenthesis
            }
            balance++;
        } else { // c == ')'
            balance--;
            if (balance > 0) {
                result += c; // Add ')' only if it's not an outer parenthesis
            }
        }
    }
    cout << result << endl;

    return 0;
}