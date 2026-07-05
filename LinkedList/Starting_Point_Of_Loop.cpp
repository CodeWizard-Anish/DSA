/*
Problem:
Find first node of cycle.

Example:

1->2->3->4
     ^    |
     |____|

Output:
2

Pattern Learned:
Floyd Algorithm

Concepts:
- Meeting point
- Reset pointer

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
Node* detectCycle(Node* head) {
    if (head == nullptr) return nullptr;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;         // Move slow by 1
        fast = fast->next->next;   // Move fast by 2

        if (slow == fast) { // Cycle detected
            // Find the start of the cycle
            Node* entry = head;
            while (entry != slow) {
                entry = entry->next;
                slow = slow->next;
            }
            return entry; // Return the start of the cycle
        }
    }

    return nullptr; // No cycle
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
    Node* cycleStart = detectCycle(head);
    if (cycleStart) {
        cout << "Cycle detected at node with value: " << cycleStart->data << endl;
    } else {
        cout << "No cycle detected." << endl;
    }

    return 0;
}