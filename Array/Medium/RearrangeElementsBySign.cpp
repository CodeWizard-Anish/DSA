/*
Problem:
Rearrange array so positive and negative elements
appear alternately.

Example:
Input:
[3,1,-2,-5,2,-4]

Output:
[3,-2,1,-5,2,-4]

Pattern Learned:
Index Tracking

Concepts:
- Separating positives and negatives
- Two position pointers

Expected Complexity:
Time: O(n)
Space: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {3,1,-2,-5,2,-4};

    vector<int> ans(nums.size());

    int pos = 0;
    int neg = 1;

    // TODO:
    // Put positive at even index
    // Put negative at odd index
    for(int i=0; i<nums.size(); i++){
        if(nums[i] >= 0){
            ans[pos] = nums[i];
            pos += 2;
        }
        else{
            ans[neg] = nums[i];
            neg += 2;
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }   

    return 0;
}