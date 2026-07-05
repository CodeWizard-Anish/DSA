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
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    int n = 2; // Example: remove 2nd node from end

    Node* dummy = new Node(0);
    dummy->next = head;
    Node* slow = dummy;
    Node* fast = dummy;

    for(int i = 0; i <= n; ++i) {
        fast = fast->next; // Move fast pointer n+1 steps ahead
    }
    while(fast != nullptr) {
        slow = slow->next; // Move slow pointer
        fast = fast->next; // Move fast pointer
    }
    Node* toDelete = slow->next; // Node to be deleted
    slow->next = slow->next->next; // Remove the nth node from end
    delete toDelete; // Free memory

    // Print the modified list
    Node* current = dummy->next;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}