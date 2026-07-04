/*
Problem:
Reverse a singly linked list.

Example:

Input:
1 -> 2 -> 3 -> 4

Output:
4 -> 3 -> 2 -> 1

Pattern Learned:
Pointer Manipulation

Concepts:
- prev
- current
- next

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
        data = val;
        next = nullptr;
    }
};
Node* createLinkedList(int arr[], int n) {
    if (n == 0) return nullptr;

    Node* head = new Node(arr[0]);
    Node* current = head;

    for (int i = 1; i < n; ++i) {
        current->next = new Node(arr[i]);
        current = current->next;
    }

    return head;
}
Node* reverseLinkedList(Node* head) {
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
Node* printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    return head;
}
int main(){

    // TODO:
    // Create linked list
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* head = createLinkedList(arr, n);

    // TODO:
    // Reverse list
    head = reverseLinkedList(head);

    // TODO:
    // Print
    printLinkedList(head);

    return 0;
}