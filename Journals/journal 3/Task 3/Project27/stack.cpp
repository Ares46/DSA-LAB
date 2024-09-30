#include "stack.h"


stack::stack() {
    head = nullptr;
}


node* concatenate(node* head1, node* head2) {
    if (head1 == NULL)
    {
        return head2;   // If first list is empty, return second list
    }

    node* temp = head1;

    // Traverse to the end of the first list
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Link the end of the first list to the head of the second list
    temp->next = head2;
    return head1;
}

node* findIntersection(node* head1, node* head2) {
    node* dummy = new node('\0'); // Dummy node for building the result list
    node* tail = dummy;

    node* temp1 = head1;
    node* temp2 = head2;

    while (temp1 && temp2) {
        if (temp1->data == temp2->data) {
            tail->next = new node(temp1->data); // Add common character
            tail = tail->next;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else if (temp1->data < temp2->data) {
            temp1 = temp1->next;
        }
        else {
            temp2 = temp2->next;
        }
    }

    return dummy->next;
}


int compareStrings(node* head1, node* head2) {
    node* temp1 = head1;
    node* temp2 = head2;

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->data < temp2->data) {
            return -1; // First string is lexicographically smaller
        }
        if (temp1->data > temp2->data) {
            return 1;  // First string is lexicographically greater
        }
        // Move to the next nodes if the characters are same
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    // If both strings have the same characters but one is longer
    if (temp1 != nullptr) return 1; // First string is longer
    if (temp2 != nullptr) return -1; // Second string is longer

    return 0; // Both strings are the same
}
