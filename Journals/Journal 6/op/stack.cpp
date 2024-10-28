#include <iostream>
#include "stack.h"
using namespace std;

stack::stack() : head(nullptr) {}

stack::~stack() {
    while (!isEmpty()) pop();
}

void stack::push(int x) {
    node* newNode = new node(x);
    newNode->next = head;
    head = newNode;
}

void stack::pop() {
    if (!isEmpty()) {
        node* temp = head;
        head = head->next;
        delete temp;
    }
    else {
        cout << "Stack is empty\n";
    }
}

int stack::peek() const {
    if (!isEmpty()) return head->a;
    cout << "Stack is empty\n";
    return -1;  // Indicate an empty stack
}

bool stack::isEmpty() const {
    return head == nullptr;
}
