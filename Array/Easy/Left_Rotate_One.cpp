/*
Problem:
Rotate array left by one position.

Example:
Input:
[1,2,3,4,5]

Output:
[2,3,4,5,1]

Pattern Learned:
Shifting Elements

Concepts:
- Temporary Storage
- In-place Manipulation

Expected Complexity:
Time: O(n)
Space: O(1)
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {1,2,3,4,5};

    // TODO:
    // Store first element
    // Shift all elements left
    // Put first element at end

    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}