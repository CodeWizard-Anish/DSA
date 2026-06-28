/*
Problem:
Find square root using binary search.

Example:

Input:
n = 28

Output:
5

Pattern Learned:
Binary Search on Answer

Concepts:
- Search Space on Answers

Expected Complexity:
Time: O(log n)
Space: O(1)
*/

#include <iostream>
using namespace std;

int main(){

    int n = 28;

    // TODO:
    // Sqrt Logic
    int start = 0;
    int end = n;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(mid*mid == n){
            cout << mid << endl;
            return 0;
        } else if(mid*mid < n){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    cout << end << endl;

    return 0;
}