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

}

int main(){

    vector<int> nums={1,2,3,4,5};

    reverseArray(nums,0,nums.size()-1);

    return 0;
}