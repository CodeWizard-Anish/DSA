#include<iostream>
using namespace std;
int main(){
    int n = 4;

    for (int i = 0; i < n; i++) {

        // Spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Increasing characters
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch;
        }

        // Decreasing characters
        for (char ch = 'A' + i - 1; ch >= 'A'; ch--) {
            cout << ch;
        }

        cout << endl;
    }
    return 0;
}