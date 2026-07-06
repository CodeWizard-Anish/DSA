/*
Problem:
Find factorial using recursion.

Example:

Input:
5

Output:
120

Pattern Learned:
Recursion

Concepts:
- Recursive multiplication

Expected Complexity:
Time: O(n)
Space: O(n)
*/

#include <iostream>
using namespace std;

int factorial(int n){

    // TODO:
    if(n == 0 || n == 1) {
        return 1; // Base case: if n is 0 or 1, return 1
    }
    return n * factorial(n - 1); // Recursive call: multiply n with the factorial of (n-1)

}

int main(){

    int n=5;

    cout<<factorial(n);

    return 0;
}