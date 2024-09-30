

#include "node.h"


class stack {
public:
   
    stack();

 
    node* head;
};

/**
 * @brief Concatenates two linked lists of characters.
 * @param head1 The head of the first linked list.
 * @param head2 The head of the second linked list.
 * @return The head of the concatenated linked list.
 */
node* concatenate(node* head1, node* head2);

/**
 * @brief Finds the intersection of two linked lists of characters.
 * @param head1 The head of the first linked list.
 * @param head2 The head of the second linked list.
 * @return A new linked list containing the intersecting characters.
 */
node* findIntersection(node* head1, node* head2);

/**
 * @brief Compares two linked lists lexicographically.
 * @param head1 The head of the first linked list.
 * @param head2 The head of the second linked list.
 * @return 0 if both lists are the same, 1 if the first list is lexicographically greater, -1 if the second list is greater.
 */
int compareStrings(node* head1, node* head2);


