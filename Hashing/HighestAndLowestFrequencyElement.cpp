/*
Problem:
Find the element having the highest frequency and the element
having the lowest frequency in an array.

Input:
arr = {1, 2, 2, 3, 3, 3}

Output:
Highest Frequency Element = 3
Lowest Frequency Element = 1

Concept:
unordered_map

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
    vector<int> arr = {1, 2, 2, 3, 3, 3};

    unordered_map<int, int> freq;

    // Build frequency map
    for(int x:arr){
        freq[x]++;
    }

    int maxFreq = INT_MIN;
    int minFreq = INT_MAX;

    int maxEle = -1;
    int minEle = -1;

    // Traverse map and update answers
    for(auto it:freq){
        if(it.second > maxFreq){
            maxFreq = it.second;
            maxEle = it.first;
        }
        if(it.second < minFreq){
            minFreq = it.second;
            minEle = it.first;
        }
    }

    cout << "Highest Frequency Element: " << maxEle << endl;
    cout << "Lowest Frequency Element: " << minEle << endl;

    return 0;
}