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
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even; // Store the head of even nodes

    while (even != nullptr && even->next != nullptr) {
        odd->next = even->next; // Link odd node to the next odd node
        odd = odd->next;        // Move odd pointer to the next odd node
        even->next = odd->next; // Link even node to the next even node
        even = even->next;      // Move even pointer to the next even node
    }
    odd->next = evenHead; // Link the last odd node to the head of even nodes   
    cout << "Rearranged list (odd followed by even): ";
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}