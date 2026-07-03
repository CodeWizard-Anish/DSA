/*
Problem:
Merge two sorted linked lists.

Example:

1->3->5
2->4->6

Output:
1->2->3->4->5->6

Pattern Learned:
Merge

Concepts:
- Dummy node

Expected Complexity:
Time: O(n+m)
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
    // Merge two lists

    return 0;
}