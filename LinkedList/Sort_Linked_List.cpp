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

int main(){

    // TODO:
    // Merge sort

    return 0;
}