/*
Problem:
Count pairs (i,j) such that:

i < j
arr[i] > arr[j]

Example:
Input:
[5,3,2,4,1]

Output:
8

Pattern Learned:
Merge Sort Application

Concepts:
- Divide and Conquer
- Counting while merging

Expected Complexity:
Time: O(n log n)
Space: O(n)
*/
#include <iostream>
#include <vector>
using namespace std;

long long mergeSort(vector<int>& arr,int low,int high){

    // TODO

    return 0;
}

int main(){

    vector<int> arr = {5,3,2,4,1};

    cout << mergeSort(arr,0,arr.size()-1);

    return 0;
}