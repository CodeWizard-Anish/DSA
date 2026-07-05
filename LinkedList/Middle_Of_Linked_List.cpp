/*
Problem:
Find middle node.

Example:

Input:
1 -> 2 -> 3 -> 4 -> 5

Output:
3

Pattern Learned:
Fast & Slow Pointer

Concepts:
- Hare and Tortoise

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
Node* middleNode(Node* head) {
    if (head == nullptr) return nullptr;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;         // Move slow by 1
        fast = fast->next->next;   // Move fast by 2
    }

    return slow; // Slow is now at the middle node
}
int main(){

    // TODO:
    // Create list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // TODO:
    // Find middle
    Node* middle = middleNode(head);
    cout << "Middle node value: " << middle->data << endl;

    return 0;
}