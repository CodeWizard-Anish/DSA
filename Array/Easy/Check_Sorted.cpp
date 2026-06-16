/*
Problem:
Check whether the array is sorted in non-decreasing order.

Example:
Input:
[1, 2, 3, 4]

Output:
True

Input:
[1, 3, 2]

Output:
False

Pattern Learned:
Adjacent Comparison

Concepts:
- Compare current with previous

Expected Complexity:
Time: O(n)
Space: O(1)
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {1, 2, 3, 4};

    bool sorted = true;

    // TODO:
    // Compare arr[i] with arr[i-1]
    for(int i=1;i<arr.size();i++){
        if(arr[i]<arr[i-1]){
            sorted = false;
            break;
        }
    }   

    cout << sorted;

    return 0;
}