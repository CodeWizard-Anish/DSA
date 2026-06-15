/*
Problem:
Demonstrate common operations on unordered_map.

Operations:
- Insert
- Update
- Search
- Erase
- Traverse

Concept:
STL unordered_map

Expected Complexity:
Average O(1) for operations
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    unordered_map<string, int> marks;

    // TODO:
    // Insert values
    // Access values
    // Update values
    // Erase values
    // Traverse map
    marks.insert({"Anish", 90});
    marks.insert({"Rahul", 85});
    marks["Anish"] = 95; // update
    cout << marks["Anish"] << endl; // search   
    marks.erase("Anish"); // erase
    for(auto x:marks){
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}