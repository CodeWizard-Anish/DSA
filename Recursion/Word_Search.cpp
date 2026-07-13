/*
Problem:
Determine if a word exists in a 2D board.

Example:

Input:
Board =
A B C E
S F C S
A D E E

Word = "ABCCED"

Output:
true

Pattern Learned:
Backtracking on Grid

Concepts:
- DFS
- Visited cells
- Backtracking

Expected Complexity:
Time: O(m * n * 4^L)
Space: O(L)
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool dfs(vector<vector<char>>& board,
         int row,
         int col,
         string& word,
         int index){

    // TODO:

}

int main(){

    vector<vector<char>> board = {

    };

    string word = "ABCCED";

    // TODO:
    // Search for word

    return 0;
}