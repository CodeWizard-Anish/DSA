/*
Problem:
Print all elements that appear more than once in an array.

Input:
arr = {1, 2, 3, 2, 4, 5, 1}

Output:
1 2

Concept:
Frequency Counting

Expected Complexity:
Time: O(n)
Space: O(n)
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 2, 4, 5, 1};

    unordered_map<int, int> freq;

    // TODO: Count frequencies
    for(int x:arr){
        freq[x]++;
    }

    cout << "Duplicate Elements: ";

    // TODO: Print elements with frequency > 1
    for(auto it:freq){
        if(it.second > 1){
            cout << it.first << " ";
        }
    }

    return 0;
}