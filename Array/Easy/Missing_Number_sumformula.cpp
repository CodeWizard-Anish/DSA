#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {1,2,4,5};

    int n = 5;

    int totalSum = n*(n+1)/2; // Expected sum of numbers from 1 to n
    int arraySum = 0;

    // TODO:
    // Calculate expected sum
    // Calculate actual sum
    // Find missing number
    for(int i=0;i<arr.size();i++){
        arraySum += arr[i];
    }
    cout<<"Missing Element:"<<totalSum-arraySum;
    return 0;
}