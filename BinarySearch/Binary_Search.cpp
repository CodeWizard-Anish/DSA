/*
Problem:
Find target element in a sorted array.

Example:

Input:
nums = [1,3,5,7,9]
target = 7

Output:
3

Pattern Learned:
Binary Search

Concepts:
- Mid calculation
- Search space reduction

Expected Complexity:
Time: O(log n)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {1,3,5,7,9};
    int target = 7;

    // TODO:
    // Binary Search Logic Here
    int left = 0;
    int right = nums.size()-1;
    int mid = left + (right - left)/2;
    while(left <= right){
       if(nums[mid]== target){
            cout<<mid;
            return 0;
       }
        else if(target <nums[mid] ){
            right = mid-1;
        }else{
            left = mid +1;
        } 
        mid = left + (right - left)/2;
    }
    cout<<-1;


    return 0;
}