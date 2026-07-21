/*
Problem:
Design an LRU Cache.

Example:

Capacity = 2

put(1,1)
put(2,2)
get(1)
put(3,3)

Pattern Learned:
Design

Concepts:
- Hash Map
- Doubly Linked List

Expected Complexity:
get() : O(1)
put() : O(1)
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

    Node(int k,int v){

        key=k;
        value=v;

        prev=nullptr;
        next=nullptr;

    }

};

class LRUCache{

    // TODO:

};

int main(){

    // TODO:
    // Test cache

    return 0;
}