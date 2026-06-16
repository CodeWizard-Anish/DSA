#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {1,2,4,5};

    int n = 5;

    int xor1 = 0;
    int xor2 = 0;

    // TODO:
    // XOR numbers from 1 to n
    // XOR all array elements
    // Answer = xor1 ^ xor2
    for(int i=1;i<=n;i++){
            xor1 = xor1 ^ i;
    }
    for(int i=0;i<arr.size();i++){
        xor2 = xor2 ^ arr[i];
    }
    cout<<"Missing Element:"<< (xor1 ^ xor2);
    return 0;
}