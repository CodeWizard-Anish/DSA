/*
Problem:
Find elements which are greater than all elements
to their right.

Example:
Input:
[10,22,12,3,0,6]

Output:
[22,12,6]

Pattern Learned:
Reverse Traversal

Concepts:
- Maintaining maximum from right

Expected Complexity:
Time: O(n)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> arr = {10,22,12,3,0,6};


    int maxi = INT_MIN;

    // TODO:
    // Traverse from right
    // Compare with maximum
    if(arr.size() == 0){
        cout << "No leaders in the array";
        return 0;
    }
    for(int i = arr.size() - 1; i >= 0; i--){
        if(arr[i] > maxi){
            cout << arr[i] << " ";
            maxi = arr[i];
        }
    }

    return 0;
}