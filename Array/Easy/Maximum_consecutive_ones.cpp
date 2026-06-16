/*
Problem:
Find the maximum number of consecutive 1s.

Example:
Input:
[1,1,0,1,1,1]

Output:
3

Pattern Learned:
Running Count

Concepts:
- Streak Counting

Expected Complexity:
Time: O(n)
Space: O(1)
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {1,1,0,1,1,1};

    int cnt = 0;
    int maxi = 0;

    // TODO:
    // Count streak
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            cnt++;
        }
        else{
            maxi = max(maxi,cnt);
            cnt = 0;
        }
    }
    maxi = max(maxi,cnt); // Update maxi one final time in case the array ends with a streak of 1s

    cout << maxi;

    return 0;
}