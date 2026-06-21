/*
Problem:
If an element is zero, make its entire row and column zero.

Example:

Input:
[
1 1 1
1 0 1
1 1 1
]

Output:
[
1 0 1
0 0 0
1 0 1
]

Pattern Learned:
Matrix Traversal

Concepts:
- Row/Column marking
- Space optimization

Expected Complexity:
Time: O(n*m)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<vector<int>> matrix = {
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };


    // TODO:
    // Use first row and column as markers
    bool firstRowZero = false;
    bool firstColZero = false;

    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            if(matrix[i][j] == 0){
                if(i == 0) firstRowZero = true;
                if(j == 0) firstColZero = true;
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Update the matrix based on the markers
    for(int i = 1; i < matrix.size(); i++){
        for(int j = 1; j < matrix[0].size(); j++){
            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }
    }

    // Update the first row if needed
    if(firstRowZero){
        for(int j = 0; j < matrix[0].size(); j++){
            matrix[0][j] = 0;
        }
    }

    // Update the first column if needed
    if(firstColZero){
        for(int i = 0; i < matrix.size(); i++){
            matrix[i][0] = 0;
        }
    }

    // Print the updated matrix
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}