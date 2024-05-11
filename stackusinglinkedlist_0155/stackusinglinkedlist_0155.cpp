#include <iostream>
using namespace std;

// Node class representing a single node in the linked list
class Node {
public:
    int data;
    Node* next;

    Node() {
        next = NULL;
    }
};

// stack class
class Stack {
private:
    Node* top;  // pointer to the top node of the stack

public:
    Stack() {
        top = NULL;  // Intialize the stack with a  null top pointer
    }

    // push operation: insert en element onto the top of the stack
    int push(int value) {
        Node* newNode = new Node(); // 1. Allocate memory for the new node
        newNode->data = value;  // 2. assign value
        newNode->next = top;    // 3. set the next pointerof the new node to the current top node
        top = newNode;  // 4. update the top pointer to the new node
        cout << "Push Value: " << value << endl;
        return 0;
    }

    // pop operation: remove the topmost element from the stuck
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        }
        cout << "Popped value: " << top->data << endl;
    }
};











































int main()
{
    
}

