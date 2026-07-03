/*
Problem:
Remove nth node from end.

Example:

Input:
1->2->3->4->5
n=2

Output:
1->2->3->5

Pattern Learned:
Two Pointer

Concepts:
- Fast pointer
- Slow pointer

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
    // Remove nth node

    return 0;
}