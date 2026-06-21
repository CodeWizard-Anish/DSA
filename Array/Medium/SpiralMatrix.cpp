
#include <iostream>
#include <vector>
using namespace std;
/*
Problem:
Print matrix in spiral order.

Example:
Input:
1 2 3
4 5 6
7 8 9

Output:
1 2 3 6 9 8 7 4 5

Pattern Learned:
Boundary Traversal

Concepts:
- top
- bottom
- left
- right

Expected Complexity:
Time: O(n*m)
Space: O(1)
*/
int main() {

    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int top = 0;
    int bottom = matrix.size()-1;
    int left = 0;
    int right = matrix[0].size()-1;

    vector<int> ans;

    // TODO:
    // Traverse top row
    // Traverse right column
    // Traverse bottom row
    // Traverse left column

    return 0;
}