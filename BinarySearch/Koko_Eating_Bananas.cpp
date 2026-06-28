/*
Problem:
Minimum eating speed.

Example:

Input:
piles = [3,6,7,11]
h = 8

Output:
4

Pattern Learned:
Binary Search on Answer

Concepts:
- Feasibility Function

Expected Complexity:
Time: O(n log maxPile)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> piles = {3,6,7,11};
    int h = 8;

    // TODO:
    // Koko Logic
    int start = 1;
    int end = 0;

    for(int i=0; i<piles.size(); i++){
        end = max(end, piles[i]);
    }
    while(start < end){
        int mid = start + (end - start)/2;
        int hours = 0;
        for(int i=0; i<piles.size(); i++){
            hours += (piles[i] + mid - 1)/mid; // ceil(piles[i]/mid)
        }
        if(hours <= h){
            end = mid;
        } else {
            start = mid + 1;
        }
    }
    cout << start << endl;



    return 0;
}