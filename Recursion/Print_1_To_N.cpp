/*
Problem:
Print numbers from 1 to N using recursion.

Example:

Input:
N = 5

Output:
1 2 3 4 5

Pattern Learned:
Basic Recursion

Concepts:
- Base case
- Recursive call

Expected Complexity:
Time: O(n)
Space: O(n)
*/

#include <iostream>
using namespace std;

void print(int n){

    // TODO:
    // Recursive logic
    if(n == 0) {
        return; // Base case: if n is 0, stop recursion
    }
    print(n - 1); // Recursive call with n-1
    cout << n << " "; // Print the current number after returning from recursion

}

int main(){

    int n = 5;

    print(n);

    return 0;
}