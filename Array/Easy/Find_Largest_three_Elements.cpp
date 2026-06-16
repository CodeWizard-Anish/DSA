/*
Problem:
Find the three largest distinct elements in an array.

Example:
Input:
[10, 4, 3, 50, 23, 90]

Output:
90 50 23

Pattern Learned:
State Tracking

Concepts:
- Multiple Variable Maintenance

Expected Complexity:
Time: O(n)
Space: O(1)
*/
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {

    vector<int> arr = {10,4,3,50,23,90};

    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;

    // TODO:
    // Update all three values
    for(int i =0;i<arr.size();i++){
        if(arr[i]>first){
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i]<first && arr[i]>second){
            third = second;
            second = arr[i];
        }
        else if(arr[i]<second && arr[i]>third){
            third = arr[i];
        }
    }
    cout<<first<<" "<<second<<" " <<third;
    return 0;
}