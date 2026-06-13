#include<iostream>
using namespace std;
int main(){
    int n = 5;

    for(int i = 1; i <= n; i++) {

        char start = 'A' + (n - i);

        for(char ch = start; ch <= 'A' + n - 1; ch++) {
            cout << ch;
        }

        cout << endl;
    }
    return 0;
}