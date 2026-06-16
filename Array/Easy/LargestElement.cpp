/*
Problem:
Find the largest element in an array.

Example:
Input:
[2, 5, 1, 3, 0]

Output:
5

Pattern Learned:
Linear Scan

Concepts:
- Array Traversal
- Maintaining an answer while traversing

Expected Complexity:
Time: O(n)
Space: O(1)
*/
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {

    vector<int> arr = {2, 5, 1, 3, 0};

    int largest = INT_MIN;

    // TODO:
    // Traverse array
    // Update largest
    for(int i  =0;i<arr.size();i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }

    cout << largest;

    return 0;
}