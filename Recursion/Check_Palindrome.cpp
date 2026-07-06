/*
Problem:
Check palindrome using recursion.

Example:

Input:
racecar

Output:
true

Pattern Learned:
Recursion

Concepts:
- Compare ends

Expected Complexity:
Time: O(n)
Space: O(n)
*/

#include <iostream>
#include <string>
using namespace std;

bool palindrome(string &s,int left,int right){

    // TODO:
    if(left >= right) {
        return true; // Base case: if left index is greater than or equal to right index, it's a palindrome
    }
    if(s[left] != s[right]) {
        return false; // If characters at left and right indices don't match, it's not a palindrome
    }
    return palindrome(s, left + 1, right - 1); // Recursive call: check the substring between left and right indices

}

int main(){

    string s="racecar";

    cout<<palindrome(s,0,s.size()-1);

    return 0;
}