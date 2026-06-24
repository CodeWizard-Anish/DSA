/*
Problem:
Find all unique triplets whose sum is 0.

Example:
Input:
[-1,0,1,2,-1,-4]

Output:
[-1,-1,2]
[-1,0,1]

Pattern Learned:
Sorting + Two Pointers

Concepts:
- Duplicate handling
- Fixed pointer + two pointers

Expected Complexity:
Time: O(n²)
Space: O(1) excluding answer
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> nums = {-1,0,1,2,-1,-4};

    sort(nums.begin(), nums.end());

    // TODO:
    // Fix one element
    // Use left and right pointers
    vector<vector<int>> result;
    for(int i = 0; i < nums.size() - 2; i++){
        int left = i + 1;
        int right = nums.size() - 1;
        while(left < right){
            int sum = nums[i] + nums[left] + nums[right];
            if(sum == 0){
                result.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;
            } else if(sum < 0){
                left++;
            } else {
                right--;
            }
        }
    }
    for(int i = 0; i < result.size(); i++){
        cout << "[";
        for(int j = 0; j < result[i].size(); j++){
            cout << result[i][j];
            if(j < result[i].size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }

    return 0;
}