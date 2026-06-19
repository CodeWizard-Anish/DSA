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

    int start = 0;//checker like it's work to check whether sum is +ve or -ve ..if -ve shift start
    int ansStart = 0;//starting index of answer subarray
    int ansEnd = 0;//last index of answer subarray


    // TODO:
    // Store starting index when new subarray begins
    // Update answer range
    for(int i=0; i<arr.size(); i++){
        sum += arr[i];

        if(sum > maxi){//checking sum greater than maxi
            maxi = sum;//updating maximum sum
            ansStart = start; //starting index updated to start of new subarray
            ansEnd = i;//last index
        }

        if(sum < 0){
            sum = 0;
            start = i + 1;//shifting start to next index as sum is negative so new subarray will start from next index
        }
    }

    // Print the subarray with maximum sum
    for(int i=ansStart; i<=ansEnd; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}