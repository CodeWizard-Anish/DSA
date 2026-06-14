/*
Problem:
Given an array and a number X, count how many times X appears.

Input:
arr = {1, 2, 3, 2, 2, 5}
X = 2

Output:
3

Concept:
Hashing

Expected Complexity:
Time: O(n)
Space: O(n)
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 2, 2, 5};
    int x = 2;

    unordered_map<int, int> freq;

    // TODO: Count frequencies
    for(int num:arr){
        freq[num]++;
    }

    cout << "Occurrences of " << x << " = " << freq[x];

    return 0;
}