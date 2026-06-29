/*
Problem:
Check whether a string is palindrome.

Example:

Input:
s = "racecar"

Output:
true

Pattern Learned:
Strings

Concepts:
- Two pointers
- Comparing characters

Expected Complexity:
Time: O(n)
Space: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    string s = "racecar";

    // TODO:
    // Palindrome logic
    int left = 0;
    int right = s.size() - 1;

    while(left < right){
        if(s[left] != s[right]){
            cout << "false" << endl;
            return 0;
        }
        left++;
        right--;
    }
    cout << "true" << endl;

    return 0;
}