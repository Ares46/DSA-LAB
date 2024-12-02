#include <iostream>
#include "node.h"

using namespace std;

//*************Exercise 1: Ackermann Function***********
int Ackmanns(int m, int n) {
    if (m == 0) {
        return n + 1;
    }
    else if (m > 0 && n == 0) {
        return Ackmanns(m - 1, 1);
    }
    else if (m > 0 && n > 0) {
        return Ackmanns(m - 1, Ackmanns(m, n - 1));
    }
    else {
        cout << "Invalid input" << endl;
        return -1; // Return error value for invalid input
    }
}

//*************Exercise 2: Sum of Array through Recursion*************
int sum(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    return arr[0] + sum(arr + 1, size - 1);
}

//**************Exercise 3: Reverse Linked List***************
node* reverse(node* head) {
    if (!head || !head->next) {
        return head; // Base case: single node or empty list
    }
    node* rest = reverse(head->next);
    head->next->next = head;
    head->next = nullptr;
    return rest;
}

//**************Main Function***************
int main() {
    // Exercise 1: Ackermann Function
    cout << "**************Ackermann Function**************" << endl;
    cout << "Ackmanns(2, 2): " << Ackmanns(2, 2) << endl;

    // Exercise 2: Sum of Array through Recursion
    int arr[] = { 1, 2, 3, 4 };
    int result = sum(arr, 4);
    cout << "**************Sum through Recursion**************" << endl;
    cout << "Sum: " << result << endl;

    // Exercise 3: Reverse Linked List
    node* a = new node(1);
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);
    a->next = b;
    b->next = c;
    c->next = d;

    cout << "**************Reversing Linked List**************" << endl;
    node* head = a; // Head of the linked list

    cout << "Original List: ";
    node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    head = reverse(head);

    cout << "Reversed List: ";
    temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
