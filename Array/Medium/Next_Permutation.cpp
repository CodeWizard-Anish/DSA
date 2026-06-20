/*
Problem:
Find the next lexicographically greater permutation.

Example:
Input:
[1,2,3]

Output:
[1,3,2]

Pattern Learned:
Greedy + Reversal

Concepts:
- Finding breakpoint
- Swapping
- Reversing suffix

Expected Complexity:
Time: O(n)
Space: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> nums = {1,2,3};


    // TODO:
    // Find breakpoint
    // Find next greater element
    // Swap
    // Reverse remaining part
    for(int i = nums.size() - 2; i >= 0; i--){
        if(nums[i] < nums[i + 1]){
            for(int j = nums.size() - 1; j > i; j--){
                if(nums[j] > nums[i]){
                    swap(nums[i], nums[j]);
                    reverse(nums.begin() + i + 1, nums.end());
                    cout << "Next permutation: ";
                    for(int k = 0; k < nums.size(); k++){
                        cout << nums[k] << " ";
                    }
                    return 0;
                }
            }
        }
    }

    // If no breakpoint found, it's the last permutation
    reverse(nums.begin(), nums.end());
    cout << "Next permutation: ";
    for(int k = 0; k < nums.size(); k++){
        cout << nums[k] << " ";
    }
    return 0;
}