/*
Problem:
Divide two integers without using *, / or %.

Example:

Input:
Dividend = 10
Divisor = 3

Output:
3

Pattern Learned:
Bit Manipulation

Concepts:
- Left Shift
- Greedy
- Overflow Handling

Expected Complexity:
Time: O(log² n)
Space: O(1)
*/

#include <iostream>
using namespace std;

int main(){

    int dividend = 10;
    int divisor = 3;

    // TODO:
    // Divide using bit operations
    if (divisor == 0) {
        cout << "Error: Division by zero" << endl;
        return 0;
    }

    long long ldividend = abs((long long)dividend);
    long long ldivisor = abs((long long)divisor);

    long long quotient = 0;
    while (ldividend >= ldivisor) {
        long long temp = ldivisor, multiple = 1;
        while (ldividend >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }
        ldividend -= temp;
        quotient += multiple;
    }
    if ((dividend < 0) ^ (divisor < 0)) {
        quotient = -quotient;
    }
    if (quotient > INT_MAX) {
        cout << INT_MAX << endl;
    } else if (quotient < INT_MIN) {
        cout << INT_MIN << endl;
    } else {
        cout << quotient << endl;
    }
    

    return 0;
}