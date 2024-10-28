#include "node.h"

class stack {
private:
    node* head;

public:
    stack();
    ~stack();
    void push(int x);
    void pop();
    int peek() const;
    bool isEmpty() const;
};


