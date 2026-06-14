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

    // TODO: Subtract frequencies using arr2

    bool equal = true;

    // TODO: Check if all frequencies are zero

    if (equal)
        cout << "Arrays are Equal";
    else
        cout << "Arrays are Not Equal";

    return 0;
}