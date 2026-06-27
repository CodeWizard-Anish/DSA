/*
Problem:
Find peak element.

Example:

Input:
nums = [1,2,3,1]

Output:
2

Pattern Learned:
Binary Search

Concepts:
- Peak Property
- Slope Observation

Expected Complexity:
Time: O(log n)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {1,2,3,1};

    // TODO:
    // Peak Element Logic
    int start = 0;
    int end = nums.size()-1;

    while(start < end){
        int mid = start + (end - start)/2;
        if(nums[mid] > nums[mid+1]){
            end = mid;
        } else {
            start = mid + 1;
        }
    }
    cout << start << endl;


    return 0;
}