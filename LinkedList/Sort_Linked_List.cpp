/*
Problem:
Sort linked list.

Example:

4->2->1->3

Output:
1->2->3->4

Pattern Learned:
Merge Sort

Concepts:
- Middle
- Merge

Expected Complexity:
Time: O(n log n)
Space: O(log n)
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
Node* merge(Node* l1, Node* l2) {
    Node* dummy = new Node(0);
    Node* tail = dummy;

    while(l1 != nullptr && l2 != nullptr) {
        if(l1->data < l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    if(l1 != nullptr) tail->next = l1;
    if(l2 != nullptr) tail->next = l2;

    return dummy->next;
}
Node* getMiddle(Node* head) {
    if(head == nullptr) return head;
    Node* slow = head;
    Node* fast = head->next;

    while(fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node* sortList(Node* head) {
    if(head == nullptr || head->next == nullptr) return head;

    Node* middle = getMiddle(head);
    Node* nextToMiddle = middle->next;
    middle->next = nullptr;

    Node* left = sortList(head);
    Node* right = sortList(nextToMiddle);

    return merge(left, right);
}
int main(){

    // TODO:
    // Merge sort
    Node* head = new Node(4);
    head->next = new Node(2);
    head->next->next = new Node(1);
    head->next->next->next = new Node(3);

    head = sortList(head);
    cout << "Sorted List: ";
    Node* current = head;
    while(current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}