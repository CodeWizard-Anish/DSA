/*
Problem:
Find the largest odd number from a numeric string.

Example:

Input:
s = "35427"

Output:
"35427"

Pattern Learned:
Strings

Concepts:
- String traversal
- Digit checking

Expected Complexity:
Time: O(n)
Space: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    string s = "35427";

    // TODO:
    // Largest odd number logic
    for(int i = s.size()-1;i>=0;i--){
        if(s[i]%2 == 1){
            cout<<s.substr(0,i+1);
            return 0;
        }
    }
    


    return 0;
}