/*
Problem:
Design an LRU (Least Recently Used) Cache.

Example:

Capacity = 2

put(1,1)
put(2,2)
get(1) => 1
put(3,3)
get(2) => -1

Pattern Learned:
Design

Concepts:
- Doubly Linked List
- Hash Map
- O(1) operations

Expected Complexity:
Time:
get() -> O(1)
put() -> O(1)

Space:
O(capacity)
*/

#include <iostream>
#include <unordered_map>
using namespace std;

class Node{
public:
    int key;
    int value;
    Node* prev;
    Node* next;

    Node(int k, int v){
        key = k;
        value = v;
        prev = nullptr;
        next = nullptr;
    }
};

int main(){

    // TODO:
    // Design LRU Cache

    // TODO:
    // Implement get()

    // TODO:
    // Implement put()

    // TODO:
    // Test operations

    return 0;
}