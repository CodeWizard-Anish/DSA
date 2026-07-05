/*
Problem:
Detect cycle in linked list.

Example:

1->2->3->4
     ^    |
     |____|

Output:
true

Pattern Learned:
Fast & Slow Pointer

Concepts:
- Floyd Cycle Detection

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
bool detectloop(Node* head) {
    if (head == nullptr) return false;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;         // Move slow by 1
        fast = fast->next->next;   // Move fast by 2

        if (slow == fast) { // Cycle detected
            return true; // Return true if cycle is detected
        }
    }

    return false; // No cycle
}
int main(){

    // TODO:
    // Create cycle
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = head->next; // Create cycle

    // TODO:
    // Detect cycle
    if (detectloop(head)) {
        cout << "Cycle detected in the linked list." << endl;
    } else {
        cout << "No cycle in the linked list." << endl;
    }

    return 0;
}