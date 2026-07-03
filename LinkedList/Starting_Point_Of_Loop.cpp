/*
Problem:
Find first node of cycle.

Example:

1->2->3->4
     ^    |
     |____|

Output:
2

Pattern Learned:
Floyd Algorithm

Concepts:
- Meeting point
- Reset pointer

Expected Complexity:
Time: O(n)
Space: O(1)
*/

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=nullptr;
    }
};

int main(){

    // TODO:
    // Create loop

    // TODO:
    // Find start

    return 0;
}