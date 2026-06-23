/*
Problem:
Generate Pascal Triangle.

Example:
Input:
5

Output:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

Pattern Learned:
Observation

Concepts:
- Combination logic
- Previous row construction

Expected Complexity:
Time: O(n²)
Space: O(n²)
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n = 5;

    vector<vector<int>> triangle;

    // TODO:
    // Generate rows
    for(int i = 0; i < n; i++) {
        vector<int> row(i + 1, 1); // Initialize row with 1s
        for (int j = 1; j < i; j++) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j]; // Fill in the values based on the previous row
        }
        triangle.push_back(row);
    }

    // Print the triangle
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}