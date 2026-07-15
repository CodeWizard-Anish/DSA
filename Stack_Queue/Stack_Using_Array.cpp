/*
Problem:
Implement Stack using Array.

Example:

push(10)
push(20)
pop()

Output:
20

Pattern Learned:
Stack Implementation

Concepts:
- Array
- Top Pointer

Expected Complexity:
push : O(1)
pop : O(1)
top : O(1)
*/

#include <iostream>
using namespace std;

class Stack{

    // TODO:
    // data members
    int *arr;
    int topIndex;
    int size;

public:

    // TODO:
    // push()
    Stack(int s){
        size = s;
        arr = new int[size];
        topIndex = -1;
    }
    void push(int x){
        if(topIndex == size - 1){
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++topIndex] = x;
    }


    // TODO:
    // pop()
    void pop(){
        if(topIndex == -1){
            cout << "Stack Underflow" << endl;
            return;
        }
        topIndex--;
    }

    // TODO:
    int top(){
        if(topIndex == -1){
            cout << "Stack is Empty" << endl;
            return -1; // or throw an exception
        }
        return arr[topIndex];
    }
    // top()

    // TODO:
    // empty()
    bool empty(){
        return topIndex == -1;
    }

};

int main(){

    // TODO:
    // Test Stack
    Stack s(5);
    s.push(10);
    s.push(20);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    return 0;
}