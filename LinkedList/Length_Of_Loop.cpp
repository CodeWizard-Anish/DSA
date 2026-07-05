/*
Problem:
Find cycle length.

Example:

Loop Length = 3

Pattern Learned:
Cycle Detection

Concepts:
- Floyd
- Count cycle

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
int countLoopLength(Node* head) {
    if (head == nullptr) return 0;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;         // Move slow by 1
        fast = fast->next->next;   // Move fast by 2

        if (slow == fast) { // Cycle detected
            // Count the length of the cycle
            int length = 0;
            Node* current = slow->next;
            while (current != slow) {
                length++;
                current = current->next;
            }
            return length; // Return the length of the cycle
        }
    }

    return 0; // No cycle
}
int main(){

    // TODO:
    // Detect cycle
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = head->next;
    // TODO:
    // Count length
    int loopLength = countLoopLength(head);
    if (loopLength > 0) {
        cout << "Cycle detected with length: " << loopLength << endl;
    } else {
        cout << "No cycle detected." << endl;
    }
    return 0;
}