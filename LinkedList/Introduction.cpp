/*
Problem:
Create a singly linked list and print all nodes.

Example:

Input:
1 -> 2 -> 3 -> 4

Output:
1 2 3 4

Pattern Learned:
Linked List Basics

Concepts:
- Node creation
- Traversal
- Head pointer

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
int main(){
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node* head = createLinkedList(arr, n);

    // Traverse and print
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}

