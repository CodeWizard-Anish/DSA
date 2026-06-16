/*
Problem:
Rotate array left by D positions.

Example:
Input:
[1,2,3,4,5,6,7]
D = 3

Output:
[4,5,6,7,1,2,3]

Pattern Learned:
Array Reversal

Concepts:
- Reversal Algorithm
- Array Manipulation

Expected Complexity:
Time: O(n)
Space: O(1)
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> arr = {1,2,3,4,5,6,7};
    int d = 3;

    // TODO:
    // Reverse first part
    // Reverse second part
    // Reverse whole array
    if(arr.empty()) return 0;
    d = d % arr.size(); // Handle cases where d >= arr.size()
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}