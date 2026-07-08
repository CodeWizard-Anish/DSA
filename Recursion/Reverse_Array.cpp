/*
Problem:
Reverse array using recursion.

Example:

Input:
1 2 3 4 5

Output:
5 4 3 2 1

Pattern Learned:
Recursion

Concepts:
- Two pointers
- Recursion

Expected Complexity:
Time: O(n)
Space: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& nums,int left,int right){

    // TODO:
    if(left >= right) {
        return; // Base case: if left index is greater than or equal to right index, return
    }
    swap(nums[left], nums[right]); // Swap the elements at left and right indices

    reverseArray(nums, left + 1, right - 1); // Recursive call: move towards the center of the array

}

int main(){

    vector<int> nums={1,2,3,4,5};

    reverseArray(nums,0,nums.size()-1);
    cout<<"Reversed Array: ";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" "; // Print the reversed array
    }
    cout<<endl;

    return 0;
}