/*
Problem:
Remove duplicates from a sorted array.

Example:
Input:
[1,1,2,2,3,3]

Output:
[1,2,3]

Pattern Learned:
Two Pointers

Concepts:
- Slow Pointer
- Fast Pointer

Expected Complexity:
Time: O(n)
Space: O(1)
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {1,1,2,2,3,3};

    int i = 0;

    // TODO:
    // Use j as fast pointer
    for(int j=1;j<arr.size();j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    cout << "Unique elements: ";
    for(int k=0;k<=i;k++){
        cout << arr[k] << " ";
    }

    return 0;
}