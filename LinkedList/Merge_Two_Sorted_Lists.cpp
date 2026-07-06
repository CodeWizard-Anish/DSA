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
    Node* l1 = new Node(1);
    l1->next = new Node(3); 
    l1->next->next = new Node(5);

    Node* l2 = new Node(2);
    l2->next = new Node(4);
    l2->next->next = new Node(6);

    Node* dummy = new Node(0);
    Node* tail = dummy;
    Node* p1 = l1;
    Node* p2 = l2;

    while(p1 != nullptr && p2 != nullptr) {
        if(p1->data < p2->data) {
            tail->next = p1;
            p1 = p1->next;
        } else {
            tail->next = p2;
            p2 = p2->next;
        }
        tail = tail->next;
    }
    // Append any remaining nodes from either list
    if(p1 != nullptr) {
        tail->next = p1;
    } else {
        tail->next = p2;
    }
    cout << "Merged List: ";
    Node* current = dummy->next;
    while(current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    return 0;
}