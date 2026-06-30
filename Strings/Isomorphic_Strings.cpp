/*
Problem:
Check if two strings are isomorphic.

Example:

Input:
s = "egg"
t = "add"

Output:
true

Pattern Learned:
String Hashing

Concepts:
- Character mapping
- Two way map

Expected Complexity:
Time: O(n)
Space: O(1)
*/

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){

    string s = "egg";
    string t = "add";

    // TODO:
    // Isomorphic logic
    unordered_map<char, char> map1, map2;
    for(int i = 0; i < s.size(); i++){
        if(map1.find(s[i]) == map1.end() && map2.find(t[i]) == map2.end()){
            map1[s[i]] = t[i];
            map2[t[i]] = s[i];
        }else {
            if(map1[s[i]] != t[i] || map2[t[i]] != s[i]){
                cout << "false" << endl;
                return 0;
            }
        }
    }
    cout << "true" << endl;

    return 0;
}