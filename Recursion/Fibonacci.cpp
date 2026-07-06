/*
Problem:
Find nth Fibonacci number.

Example:

Input:
6

Output:
8

Pattern Learned:
Recursion

Concepts:
- Multiple recursive calls

Expected Complexity:
Time: O(2^n)
Space: O(n)
*/

#include <iostream>
using namespace std;

int fib(int n){

    // TODO:
    if(n == 0) {
        return 0; // Base case: if n is 0, return 0
    }
    if(n == 1) {
        return 1; // Base case: if n is 1, return 1
    }
    return fib(n - 1) + fib(n - 2); // Recursive call: sum of previous two Fibonacci numbers

}

int main(){

    int n=6;

    cout<<fib(n);

    return 0;
}