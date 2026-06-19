/*
Problem:
Find maximum profit by buying and selling a stock once.

Example:
Input:
[7,1,5,3,6,4]

Output:
5

Explanation:
Buy at 1 and sell at 6.

Pattern Learned:
Minimum Tracking

Concepts:
- Maintain minimum value so far
- Calculate best difference

Expected Complexity:
Time: O(n)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> prices = {7,1,5,3,6,4};

    int mini = prices[0];//starting with first element as minimum value
    int profit = 0;

    // TODO:
    // Update minimum
    // Calculate profit
    for(int i = 1; i<prices.size(); i++){
        mini = min(mini, prices[i]);//checking minimum value at every point
        profit = max(profit, prices[i] - mini);//updating profit at every point by checking difference between current value and minimum value so far
    }


    cout << profit;

    return 0;
}