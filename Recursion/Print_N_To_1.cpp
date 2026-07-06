/*
Problem:
Print numbers from N to 1.

Example:

Input:
5

Output:
5 4 3 2 1

Pattern Learned:
Basic Recursion

Concepts:
- Recursive printing

Expected Complexity:
Time: O(n)
Space: O(n)
*/

#include <iostream>
using namespace std;

void print(int n){

    // TODO:
    if(n == 0) {
        return; // Base case: if n is 0, stop recursion
    }
    cout << n << " "; // Print the current number
    print(n - 1); // Recursive call with n-1

}

int main(){

    int n=5;

    print(n);

    return 0;
}