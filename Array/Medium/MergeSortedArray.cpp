/*
Problem:
Merge two sorted arrays.

Example:
Input:
[1,2,3]
[2,5,6]

Output:
[1,2,2,3,5,6]

Pattern Learned:
Two Pointers

Concepts:
- Merge process

Expected Complexity:
Time: O(n+m)
Space: O(n+m)
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {2,5,6};

    vector<int> ans;

    int i = 0;
    int j = 0;

    // TODO:
    // Merge
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
        }
        else {
            ans.push_back(arr2[j]);
            j++;
        }
    }

    // Add any remaining elements from either array
    while (i < arr1.size()) {
        ans.push_back(arr1[i]);
        i++;
    }

    while (j < arr2.size()) {
        ans.push_back(arr2[j]);
        j++;
    }

    // Print the merged array
    for (int k = 0; k < ans.size(); k++) {
        cout << ans[k] << " ";
    }
    
    return 0;
}