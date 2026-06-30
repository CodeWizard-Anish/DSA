/*
Problem:
Check if two strings are anagrams.

Example:

Input:
s = "anagram"
t = "nagaram"

Output:
true

Pattern Learned:
String Hashing

Concepts:
- Frequency counting
- Hash map

Expected Complexity:
Time: O(n)
Space: O(1)
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    string s = "anagram";
    string t = "nagaram";

    // TODO:
    // Anagram logic
    if(s.size() != t.size()){
        cout << "false" << endl;
        return 0;
    }
    vector<int> count(26, 0);
    for(int i = 0; i < s.size(); i++){  
        
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for(int i = 0; i < 26; i++){
        if(count[i] != 0){
            cout << "false" << endl;
            return 0;
        }
    }
    cout << "true" << endl;
    return 0;
}