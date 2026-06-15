/*
Problem:
Find the length of the longest sequence of consecutive integers.

Input:
nums = {100, 4, 200, 1, 3, 2}

Output:
4

Explanation:
Sequence = {1, 2, 3, 4}

Concept:
unordered_set

Expected Complexity:
Time: O(n)
Space: O(n)
*/
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    unordered_set<int> st;

    // TODO:
    // Insert all numbers into set
    for(int x:nums){
        st.insert(x);
    }

    int longest = 0;

    // TODO:
    // For each number
    // Check if it's the start of a sequence
    // Expand sequence length
    // Update longest
    for(int x:nums){
        if(st.find(x-1) == st.end()){
            int currentNum = x;
            int currentStreak = 1;

            while(st.find(currentNum + 1) != st.end()){
                currentNum++;
                currentStreak++;
            }

            longest = max(longest, currentStreak);
        }
    }

    cout << longest;

    return 0;
}