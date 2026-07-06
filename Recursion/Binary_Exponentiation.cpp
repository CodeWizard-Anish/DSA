/*
Problem:
Calculate x^n using Binary Exponentiation.

Example:

Input:
2 10

Output:
1024

Pattern Learned:
Divide and Conquer

Concepts:
- Fast Power
- Recursion

Expected Complexity:
Time: O(log n)
Space: O(log n)
*/

#include <iostream>
using namespace std;

long long power(long long x,long long n){

    // TODO:
    if(n == 0) {
        return 1; // Base case: if n is 0, return 1
    }
    long long temp = power(x, n / 2); // Recursive call with n/2
    if(n % 2 == 0) {
        return temp * temp; // If n is even, return (x^(n/2))^2
    }
    else {
        return x * temp * temp; // If n is odd, return x * (x^(n/2))^2
    }

}

int main(){

    cout<<power(2,10);

    return 0;
}