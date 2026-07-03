/*
Problem:
Detect cycle in linked list.

Example:

1->2->3->4
     ^    |
     |____|

Output:
true

Pattern Learned:
Fast & Slow Pointer

Concepts:
- Floyd Cycle Detection

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
    // Create cycle

    // TODO:
    // Detect cycle

    return 0;
}