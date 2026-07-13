/*
Problem:
Find all paths from source to destination.

Example:

Input:
Maze

Output:
DDRDRR

Pattern Learned:
Backtracking

Concepts:
- DFS
- Visited array

Expected Complexity:
Exponential
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(int row,
           int col,
           vector<vector<int>>& maze,
           vector<vector<int>>& visited,
           string path){

    // TODO:

}

int main(){

    vector<vector<int>> maze = {

    };

    vector<vector<int>> visited(maze.size(),
                                vector<int>(maze.size(),0));

    solve(0,0,maze,visited,"");

    return 0;
}