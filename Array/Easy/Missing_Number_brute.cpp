/*
Problem:
Find the missing number from 1 to N.

Example:
Input:
[1,2,4,5]

Output:
3

Pattern Learned:
Math / XOR

Concepts:
- Summation Formula
- XOR Trick

Expected Complexity:
Time: O(n)
Space: O(1)
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {1,2,4,5};

    int n = 5;

    // TODO:
    // Check every number from 1 to n
    for(int i=1;i<=n;i++){
        bool found = false;
        for(int j=0;j<arr.size();j++){
            if(arr[j]==i){
                found = true;
                break;
            }
        }
        if(!found){
            cout << "Missing number: " << i;
            break;
        }
    }

    return 0;
}