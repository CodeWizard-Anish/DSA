/*
Problem:
Find the contiguous subarray with the maximum sum.

Example:
Input:
[-2,1,-3,4,-1,2,1,-5,4]

Output:
6

Explanation:
Subarray [4,-1,2,1] has maximum sum.

Pattern Learned:
Kadane's Algorithm

Concepts:
- Running sum
- Deciding when to reset
- Greedy thinking

Expected Complexity:
Time: O(n)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};

    int sum = 0;
    int maxi = INT_MIN;

    // TODO:
    // Add current element to sum
    // Update maximum
    // If sum becomes negative reset it
    for(int i=0; i<arr.size(); i++){
        sum += arr[i];
        maxi = max(maxi, sum);
        if(sum < 0){
            sum = 0;
        }
    }
    

    cout << maxi;

    return 0;
}