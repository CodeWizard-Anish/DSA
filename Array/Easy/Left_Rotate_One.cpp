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
    if(arr.empty()) return;
    int first = arr[0];
    int i = 0;
    for(int j =1;j<arr.size();j++){//can be done with single loop as well no need of two pointers anyway keep learning
        arr[i]=arr[j];
        i++;
    }
    arr[arr.size()-1]=first;

    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}