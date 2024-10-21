#include "node.h"

class DList
{
private:
	node* head;
	

public:
	DList();
	// Checks if the list is empty or not
	bool emptyList();

	/* Inserts a new node with value ‘newV’ after the node
	containing value ‘oldV’.If a node with value ‘oldV’ does
	not exist, does not insert the new node at the end.*/
	void insert_after(int oldV, int newV);

	// Deletes the node containing the specified value
	void deleteNode(int value);

	// Inserts a new node at the start of the list
	void insert_begin(int value);

	// Inserts a new node at the end of the list
	void insert_end(int value);
	// Displays the values stored in the list starting from head

	void traverse();
};

