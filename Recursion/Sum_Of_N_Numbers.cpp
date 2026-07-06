/*
Problem:
Find sum of first N natural numbers.

Example:

Input:
5

Output:
15

Pattern Learned:
Recursion

Concepts:
- Return recursion

Expected Complexity:
Time: O(n)
Space: O(n)
*/

#include <iostream>
using namespace std;

int sum(int n){

    // TODO:
    if(n == 0) {
        return 0; // Base case: if n is 0, return 0
    }
    return n + sum(n - 1); // Recursive call: add n to the sum of first (n-1) natural numbers
}

int main(){

    int n=5;

    cout<<sum(n);

    return 0;
}