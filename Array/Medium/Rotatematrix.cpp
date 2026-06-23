/*
Problem:
Rotate an NxN matrix by 90 degrees clockwise.

Example:
Input:
1 2 3
4 5 6
7 8 9

Output:
7 4 1
8 5 2
9 6 3

Pattern Learned:
Transpose + Reverse

Concepts:
- Matrix manipulation
- Symmetry

Expected Complexity:
Time: O(n²)
Space: O(1)
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // TODO:
    // Transpose matrix
    // Reverse every row
    for(int i = 0; i < matrix.size(); i++) {
        for (int j = i + 1; j < matrix[0].size(); j++) {// starts with j = i + 1 to avoid swapping back
            //We only want to touch the cells above the diagonal:
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i = 0; i < matrix.size(); i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
    // Print the rotated matrix
    for(int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}