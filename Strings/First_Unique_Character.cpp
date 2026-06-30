/*
Problem:
Find first non repeating character.

Example:

Input:
s = "leetcode"

Output:
0

Pattern Learned:
String Hashing

Concepts:
- Frequency array
- Traversal

Expected Complexity:
Time: O(n)
Space: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    string s = "leetcode";

    // TODO:
    // First unique character logic
    int freq[26] = {0};
    for(int i = 0; i < s.size(); i++){
        freq[s[i] - 'a']++;
    }
    for(int i = 0; i < s.size(); i++){
        if(freq[s[i] - 'a'] == 1){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;


    return 0;
}