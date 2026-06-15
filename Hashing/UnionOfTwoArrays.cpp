/*
Problem:
Find the union of two arrays.

Input:
arr1 = {1, 2, 3, 4}
arr2 = {3, 4, 5, 6}

Output:
1 2 3 4 5 6

Concept:
unordered_set

Expected Complexity:
Time: O(n + m)
Space: O(n + m)
*/
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {3, 4, 5, 6};

    unordered_set<int> st;//can't say anything about order in output

    // TODO:
    // Insert all elements of arr1
    for(int x:arr1){
        st.insert(x);
    }
    // Insert all elements of arr2
    for(int x:arr2){
        st.insert(x);
    }

    cout << "Union Elements:\n";

    for(auto x : st){
        cout << x << " ";
    }

    return 0;
}