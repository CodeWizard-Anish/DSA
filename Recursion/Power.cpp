/*
Problem:
Calculate x^n using recursion.

Example:

Input:
x=2
n=5

Output:
32

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

long long power(long long x,int n){

    // TODO:
    if(n == 0) {
        return 1; // Base case: if n is 0, return 1
    }
    return x * power(x, n - 1); // Recursive call: multiply x with the result of x^(n-1)

}

int main(){

    cout<<power(2,5);

    return 0;
}