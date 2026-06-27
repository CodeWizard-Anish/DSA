/*
Problem:
Find minimum in rotated sorted array.

Example:

Input:
nums = [4,5,6,7,0,1,2]

Output:
0

Pattern Learned:
Modified Binary Search

Concepts:
- Rotation Point

Expected Complexity:
Time: O(log n)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {4,5,6,7,0,1,2};

    // TODO:
    // Find Minimum Logic
    int start = 0;
    int end = nums.size() - 1;

    while(start<end){
        int mid = start +(end  - start )/2;
        if (nums[mid] > nums[end]){
            start = mid + 1; // move right
        } else {
            end = mid; // move left
        }
    }

    cout << nums[start] << endl;

    return 0;
}