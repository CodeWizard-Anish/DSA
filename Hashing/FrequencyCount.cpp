/*
Problem:
Count the frequency of each element in an array.

Input:
arr = {1, 2, 1, 3, 2, 1}

Output:
1 -> 3
2 -> 2
3 -> 1

Concept:
unordered_map

Expected Complexity:
Time: O(n)
Space: O(n)
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 1, 3, 2, 1};

    unordered_map<int, int> freq;

    // Count frequencies
    for(int x:arr){
        freq[x]++;
    }
    // Print frequencies
    for(auto it:freq){
        cout << "Element: " << it.first << " Frequency: " << it.second << endl;
    }
    return 0;
}