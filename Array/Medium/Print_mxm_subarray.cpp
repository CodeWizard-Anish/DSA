/*
Problem:
Print the actual subarray having maximum sum.

Example:
Input:
[-2,1,-3,4,-1,2,1,-5,4]

Output:
[4,-1,2,1]

Pattern Learned:
Kadane + Index Tracking

Concepts:
- Maintaining start/end indices
- Tracking answer

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

    int start = 0;
    int ansStart = 0;
    int ansEnd = 0;


    // TODO:
    // Store starting index when new subarray begins
    // Update answer range

    return 0;
}