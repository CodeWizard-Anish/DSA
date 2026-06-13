#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 1, 1};
    int hash[10] = {0};

    for(int i = 0; i < 6; i++) {
        hash[arr[i]]++;
    }

    cout << hash[1]; // 3
}