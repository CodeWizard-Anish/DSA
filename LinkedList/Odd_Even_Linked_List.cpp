/*
Problem:
Group odd index nodes then even index nodes.

Example:

1->2->3->4->5

Output:
1->3->5->2->4

Pattern Learned:
Pointer Rearrangement

Concepts:
- Odd pointer
- Even pointer

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
    // Rearrange list

    return 0;
}