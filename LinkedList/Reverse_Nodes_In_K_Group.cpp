/*
Problem:
Reverse nodes in groups of k.

Example:

Input:
1 -> 2 -> 3 -> 4 -> 5
k = 2

Output:
2 -> 1 -> 4 -> 3 -> 5

Pattern Learned:
Pointer Manipulation

Concepts:
- Reverse sublist
- Group processing

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
    // Reverse every k nodes

    // TODO:
    // Print answer

    return 0;
}