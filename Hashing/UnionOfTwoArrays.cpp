/*
Problem:
Find the union of two arrays.

Input:
arr1 = {1, 2, 3, 4}
arr2 = {3, 4, 5, 6}

Output:
1 2 3 4 5 6

Concept:
unordered_set

Expected Complexity:
Time: O(n + m)
Space: O(n + m)
*/
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {3, 4, 5, 6};

    unordered_set<int> st;

    // TODO:
    // Insert all elements of arr1
    // Insert all elements of arr2

    cout << "Union Elements:\n";

    for(auto x : st){
        cout << x << " ";
    }

    return 0;
}