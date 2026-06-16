/*
Problem:
Move all zeroes to the end while maintaining
the relative order of non-zero elements.

Example:
Input:
[1,0,2,0,3,4]

Output:
[1,2,3,4,0,0]

Pattern Learned:
Two Pointers

Concepts:
- Swapping
- Stable Rearrangement

Expected Complexity:
Time: O(n)
Space: O(1)
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {1,0,2,0,3,4};

    int j = -1; // Pointer to track the position of the first zero

    // TODO:
    // Find first zero
    // Move non-zero elements forward using swapping
    if(nums.empty()) return 0;
    for(int i =1;i<nums.size();i++){
        if(nums[i]!=0 && nums[j]==0){
            swap(nums[i],nums[j]);
            j++;
        }
        else if(nums[i]==0 && j==-1){
            j=i;
        }
    }

    for(int x : nums){
        cout << x << " ";
    }

    return 0;
}