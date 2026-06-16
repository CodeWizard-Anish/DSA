/*
Problem:
Find the second largest distinct element in an array.

Example:
Input:
[12, 35, 1, 10, 34, 1]

Output:
34

Pattern Learned:
State Tracking

Concepts:
- Maintaining multiple answers
- Updating values carefully

Expected Complexity:
Time: O(n)
Space: O(1)
*/
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {

    vector<int> arr = {12, 35, 1, 10, 34, 1};

    int largest = arr[0];
    int secondLargest = INT_MIN;

    // TODO: 
    // Traverse array
    // Update largest and secondLargest
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        
        else if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest = arr[i];
        }
    }

    cout << secondLargest;

    return 0;
}