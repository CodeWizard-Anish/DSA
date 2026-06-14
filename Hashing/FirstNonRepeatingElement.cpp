/*
Problem:
Find the first element in the array that occurs exactly once.

Input:
arr = {9, 4, 9, 6, 7, 4}

Output:
6

Concept:
Hashing + Array Traversal

Expected Complexity:
Time: O(n)
Space: O(n)
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {9, 4, 9, 6, 7, 4};

    unordered_map<int, int> freq;

    // TODO: Count frequencies
    for(int x:arr){
        freq[x]++;
    }

    // TODO: Traverse array again and print first element
    // whose frequency is 1

    for(auto it:freq){
        if(it.second == 1){
            cout<<it.first<<" ";
        }
        
    }
    
    return 0;
}