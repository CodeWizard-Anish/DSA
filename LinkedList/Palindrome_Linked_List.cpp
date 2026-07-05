/*
Problem:
Check whether linked list is palindrome.

Example:

1->2->2->1

Output:
true

Pattern Learned:
Reverse Second Half

Concepts:
- Middle
- Reverse
- Compare

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
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next; // Store next node
        current->next = prev; // Reverse the link
        prev = current;       // Move prev to current
        current = next;       // Move to next node
    }

    return prev; // New head of the reversed list
}
int main(){

    // TODO:
    // Create list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);

    // TODO:
    // Check palindrome
    Node* reversedHead = reverseList(head);
    bool isPalindrome = true;
    Node* current = head;
    Node* reversedCurrent = reversedHead;

    while (current != nullptr && reversedCurrent != nullptr) {
        if (current->data != reversedCurrent->data) {
            isPalindrome = false;
            break;
        }
        current = current->next;
        reversedCurrent = reversedCurrent->next;
    }

    if (isPalindrome) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}