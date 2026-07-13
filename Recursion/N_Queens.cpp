/*
Problem:
Place N queens on an N×N chessboard such that no two queens attack each other.

Example:

Input:
N = 4

Output:
[
".Q..",
"...Q",
"Q...",
"..Q."
]

Pattern Learned:
Backtracking

Concepts:
- Row by row placement
- Column check
- Diagonal check

Expected Complexity:
Time: O(N!)
Space: O(N)
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(int col,
           vector<string>& board,
           vector<int>& leftRow,
           vector<int>& upperDiagonal,
           vector<int>& lowerDiagonal){

    // TODO:
    // Base Case

    // TODO:
    // Try placing queen

    // TODO:
    // Backtrack
}

int main(){

    int n = 4;

    vector<string> board(n, string(n,'.'));

    vector<int> leftRow(n,0);
    vector<int> upperDiagonal(2*n-1,0);
    vector<int> lowerDiagonal(2*n-1,0);

    solve(0,board,leftRow,upperDiagonal,lowerDiagonal);

    return 0;
}