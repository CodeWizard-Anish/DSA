/*
Problem:
Check palindrome ignoring spaces and special characters.

Example:

Input:
"A man, a plan, a canal: Panama"

Output:
true

Pattern Learned:
Two Pointer

Concepts:
- Character filtering
- Lowercase conversion

Expected Complexity:
Time: O(n)
Space: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    string s = "A man, a plan, a canal: Panama";

    // TODO:
    // Valid palindrome logic
    for(int i = 0, j = s.size() - 1; i < j; ) {
        while (i < j && !isalnum(s[i])) i++;
        while (i < j && !isalnum(s[j])) j--;
        if (tolower(s[i]) != tolower(s[j])) {
            cout << "false" << endl;
            return 0;
        }
        i++;
        j--;
    }
    cout << "true" << endl;


    return 0;
}