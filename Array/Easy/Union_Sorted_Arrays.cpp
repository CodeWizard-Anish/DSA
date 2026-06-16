/*
Problem:
Find the union of two sorted arrays.

Example:
Input:
arr1 = [1,2,3,4]
arr2 = [2,3,5]

Output:
[1,2,3,4,5]

Pattern Learned:
Two Pointers

Concepts:
- Merge Technique

Expected Complexity:
Time: O(n+m)
Space: O(n+m)
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr1 = {1,2,3,4};
    vector<int> arr2 = {2,3,5};

    vector<int> ans;

    int i = 0;
    int j = 0;

    // TODO:
    // Merge arrays
    while(i < arr1.size() && j < arr2.size()){//Merge technique using pointer
        if(arr1[i] < arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i] > arr2[j]){
            ans.push_back(arr2[j]);
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(int k = i; k < arr1.size(); k++){
       ans.push_back(arr1[k]);
    }
    cout << "Union of two sorted arrays: ";
    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}