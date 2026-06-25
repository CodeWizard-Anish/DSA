/*
Problem:
Search target in rotated sorted array.

Example:

Input:
nums = [4,5,6,7,0,1,2]
target = 0

Output:
4

Pattern Learned:
Modified Binary Search

Concepts:
- Sorted Half Detection

Expected Complexity:
Time: O(log n)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;

    // TODO:
    // Rotated Search Logic
    int start = 0;
    int end = nums.size() - 1;

    while(start<=end){
        int mid = start +(end  - start )/2;
        if (nums[mid] == target){
            cout<< mid << endl;
            return 0;
        } 

            // Check if left part is sorted
            if (nums[mid] >= nums[start]) {
                if (target >= nums[start] && target < nums[mid]) {
                    end = mid - 1; // move left
                } else {
                    start = mid + 1; // move right
                }
            } 
            // Right part is sorted
            else {
                if (target > nums[mid] && target <= nums[end]) {
                    start = mid + 1; // move right
                } else {
                    end = mid - 1; // move left
                }
            }
        }
   
        cout << -1 << endl; 


    return 0;
}