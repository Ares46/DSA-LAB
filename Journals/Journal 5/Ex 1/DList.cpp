#include "DList.h"


DList::DList()
{
	head = NULL;
}


bool DList:: emptyList()
{
	if (head == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}



}

void DList::insert_begin(int a)
{
	node* temp = new node(a);


	if (emptyList())
	{
		head = temp;
	}
	else
	{
		temp->next = head;
		head->prev = temp;
		head = temp;

	}





}


void DList::insert_end(int a)
{
	node* temp = new node(a);
	node* current = head;

	if (emptyList())
	{
		head = temp;
	}
	else
	{
		while (current->next != NULL)
		{

			current = current->next;

		}
		
		temp->prev = current;

		current->next = temp;
		

	}

}


void DList::deleteNode(int a) {
	if (emptyList()) {
		cout << "List is empty";
		return;
	}

	node* current = head;

	while (current != NULL && current->data != a) {
		current = current->next;
	}

	if (current == NULL) {
		cout << "Data not found";
		return;
	}

	// If we're deleting the head node
	if (current == head) {
		head = current->next;
		if (head != NULL) {
			head->prev = NULL;
		}
	}
	else {
		if (current != head) {
			node* temp = current->prev;
			temp->next = current->next;
			node* temp2 = temp->next;
			temp2->prev = temp;
		}
	}

	// If we're deleting the tail node
	if (current->next != NULL) {
		current->next->prev = current->prev;
	}


	delete current;
}



void DList::insert_after(int old, int New)
{
	node* temp = new node(New);

	node* current = head;

	while (current != NULL && current->data != old) {
		current = current->next;

	}

	if (current->data != old)
	{
		insert_end(New);
	}
	else
	{
		temp->next = current->next;
		temp->prev = current;
		current->next = temp;


	}



}



void DList::traverse()
{
	node* current = head;

	if (emptyList())
	{
		cout << "Empty list";
	}
	else
	{

		while (current != NULL)
		{
			cout << current->data << endl;
			current = current->next;

		}




	}




}