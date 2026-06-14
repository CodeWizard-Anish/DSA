/*
Problem:
Find the element that occurs the maximum number of times.

Input:
arr = {1, 3, 2, 1, 4, 1, 5}

Output:
1

Concept:
Hashing

Expected Complexity:
Time: O(n)
Space: O(n)
*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 2, 1, 4, 1, 5};

    unordered_map<int, int> freq;

    // TODO: Count frequencies
    for(int x:arr){
        freq[x]++;
    }

    int maxFreq = INT_MIN;
    int ans = -1;

    // TODO: Find element with maximum frequency
    for(auto it:freq){
        if(it.second > maxFreq){
            maxFreq = it.second;
            ans = it.first;
        }
    }

    cout << "Most Frequent Element: " << ans;

    return 0;
}