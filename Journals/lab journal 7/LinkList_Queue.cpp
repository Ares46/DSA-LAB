#include "LinkList_Queue.h"



LinkList_Queue::LinkList_Queue()
{
	head = NULL;
	front = NULL;
	rear = NULL;
}

void LinkList_Queue::Enqueue(int a)
{
	node* new_node = new node;

	if (head == NULL)
	{
		head = new_node;
		rear = head;
		
    }
	else
	{
		rear->next = new_node;
		rear = rear->next;

	}


}


void LinkList_Queue::Dequeue()
{
	

	if (head == NULL)
	{
		cout << "Queue is empty";
	}
	else
	{
		head = head->next;
		front = head;

	}


}


LinkList_Queue::~LinkList_Queue()
{
}
