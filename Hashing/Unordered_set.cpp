/*
Problem:
Demonstrate common operations on unordered_set.

Operations:
- Insert
- Search
- Count
- Erase
- Traverse

Concept:
STL unordered_set

Expected Complexity:
Average O(1) for operations
*/
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

    unordered_set<int> st;

    // TODO:
    // insert
    // erase
    // find
    // count
    // traverse
    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.erase(10);
    st.find(20);
    st.size();
    for(auto it:st){
        cout<<it;
    }

    return 0;
}