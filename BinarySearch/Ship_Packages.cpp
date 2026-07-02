/*
Problem:
Minimum ship capacity.

Example:

Input:
weights = [1,2,3,4,5,6,7,8,9,10]
days = 5

Output:
15

Pattern Learned:
Binary Search on Answer

Concepts:
- Capacity Validation

Expected Complexity:
Time: O(n log sumWeights)
Space: O(1)
*/

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int possible(vector<int>& weights, int capacity, int days) {
    int currentLoad = 0;
    int requiredDays = 1; // Start with one day

    for (int weight : weights) {
        if (currentLoad + weight > capacity) {
            requiredDays++;
            currentLoad = weight; // Start a new day with the current weight
        } else {
            currentLoad += weight; // Add weight to the current load
        }
    }

    return requiredDays <= days;
}
int minDays(vector<int>& weights, int days) {
    int low = *max_element(weights.begin(), weights.end()); // Minimum capacity must be at least the heaviest package
    int high = accumulate(weights.begin(), weights.end(), 0); // Maximum capacity is the sum of all weights
    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (possible(weights, mid, days)) {
            ans = mid; // Found a valid capacity, try for a smaller one
            high = mid - 1;
        } else {
            low = mid + 1; // Increase capacity
        }
    }

    return ans;
}
int main(){

    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    // TODO:
    // Ship Capacity Logic
cout << minDays(weights, days) << endl;

    return 0;
}