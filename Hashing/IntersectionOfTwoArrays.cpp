/*
Problem:
Find common elements present in both arrays.

Input:
arr1 = {1, 2, 3, 4}
arr2 = {3, 4, 5, 6}

Output:
3 4

Concept:
Hash Set

Expected Complexity:
Time: O(n + m)
Space: O(n)
*/
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {3, 4, 5, 6};

    unordered_set<int> st;

    // TODO:
    // Insert arr1 into set
    for(int x:arr1){
        st.insert(x);
    }

    cout << "Intersection:\n";

    // Traverse arr2
    // If element exists in set
    // Print it
    for(int x:arr2){
        if(st.find(x) != st.end()){
            cout << x << " ";
        }
    }
    
    return 0;
}