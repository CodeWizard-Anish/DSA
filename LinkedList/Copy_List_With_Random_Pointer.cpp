/*
Problem:
Deep copy a linked list having next and random pointers.

Example:

Node1 -> Node2 -> Node3
Random pointers may point anywhere.

Output:
Deep copied linked list.

Pattern Learned:
Linked List Copy

Concepts:
- Random pointer
- Interleaving nodes
- Deep copy

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
    Node* random;

    Node(int val){
        data = val;
        next = nullptr;
        random = nullptr;
    }
};

int main(){

    // TODO:
    // Create linked list

    // TODO:
    // Assign random pointers

    // TODO:
    // Deep copy list

    // TODO:
    // Verify copied list

    return 0;
}