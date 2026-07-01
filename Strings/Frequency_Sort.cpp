/*
Problem:
Sort characters based on frequency.

Example:

Input:
s = "tree"

Output:
"eert"

Pattern Learned:
String Hashing

Concepts:
- Frequency map
- Sorting

Expected Complexity:
Time: O(n log n)
Space: O(n)
*/

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){

    string s = "tree";

    // TODO:
    // Frequency sorting logic
    unordered_map<char, int> freq;
    for(char c : s){
        freq[c]++;
    }
    for(auto it : freq){
        cout << string(it.second, it.first);
    }



    return 0;
}