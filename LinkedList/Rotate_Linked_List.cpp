/*
Problem:
Rotate linked list to the right by k places.

Example:

Input:
1 -> 2 -> 3 -> 4 -> 5
k = 2

Output:
4 -> 5 -> 1 -> 2 -> 3

Pattern Learned:
Circular Linked List

Concepts:
- Find length
- Circular connection
- Break at correct position

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
        data = val;
        next = nullptr;
    }
};

int main(){

    int k = 2;

    // TODO:
    // Create linked list

    // TODO:
    // Rotate list

    // TODO:
    // Print answer

    return 0;
}