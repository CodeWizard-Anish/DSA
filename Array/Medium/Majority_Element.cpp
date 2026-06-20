/*
Problem:
Find element appearing more than n/2 times.

Example:
Input:
[2,2,1,1,1,2,2]

Output:
2

Pattern Learned:
Boyer Moore Voting Algorithm

Concepts:
- Cancelling votes
- Majority property

Expected Complexity:
Time: O(n)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {2,2,1,1,1,2,2};


    int element = 0;
    int count = 0;

    // TODO:
    // Implement voting algorithm
    for(int i = 0; i < nums.size(); i++){
        if(count == 0){
            element = nums[i];
            count = 1;
        } else if(nums[i] == element){
            count++;
        } else {
            count--;
        }
    }

    cout << "Majority element: " << element << endl;

    return 0;
}