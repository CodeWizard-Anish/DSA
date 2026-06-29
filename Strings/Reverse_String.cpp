/*
Problem:
Reverse a string.

Example:

Input:
s = "hello"

Output:
"olleh"

Pattern Learned:
Strings

Concepts:
- Two pointer
- Character swapping

Expected Complexity:
Time: O(n)
Space: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    string s = "hello";

    // TODO:
    // Reverse string logic
   for(int i = s.size();i>=0;i--){
    cout<<s[i];
   }
    




    return 0;
}