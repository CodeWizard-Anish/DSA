/*
Problem:
Flatten a linked list having bottom pointers.

Example:

5 -> 10 -> 19 -> 28
|     |      |      |
7     20     22     35
|            |      |
8            50     40
|                   |
30                  45

Output:
5 -> 7 -> 8 -> 10 -> 19 -> 20 -> 22 -> 28 -> 30 -> 35 -> 40 -> 45 -> 50

Pattern Learned:
Merge Linked Lists

Concepts:
- Bottom pointer
- Merge sorted lists
- Recursion

Expected Complexity:
Time: O(n log n)
Space: O(log n)
*/

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int val){
        data = val;
        next = nullptr;
        bottom = nullptr;
    }
};

int main(){

    // TODO:
    // Create multi-level linked list

    // TODO:
    // Flatten list

    // TODO:
    // Print flattened list

    return 0;
}