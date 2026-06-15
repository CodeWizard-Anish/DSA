/*
Problem:
Check whether two arrays contain the same elements
with the same frequencies.

Input:
arr1 = {1, 2, 3, 4}
arr2 = {4, 3, 2, 1}

Output:
Arrays are Equal

Concept:
Hash Map

Expected Complexity:
Time: O(n)
Space: O(n)
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {4, 3, 2, 1};

    unordered_map<int, int> freq;

    // TODO: Add frequencies from arr1
    for(int x:arr1){
        freq[x]++;
    }

    // TODO: Subtract frequencies using arr2
    for(int x:arr2){
        freq[x]--;
    }

    bool equal = true;

    // TODO: Check if all frequencies are zero
    for(auto x:freq){
        if(x.second != 0){
            equal = false;
            break;
        }
    }

    if (equal)
        cout << "Arrays are Equal";
    else
        cout << "Arrays are Not Equal";

    return 0;
}