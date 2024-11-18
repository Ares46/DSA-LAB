#include "ascending_priority.h"



ascending_priority::ascending_priority()
{
	head = NULL;
	front = NULL;
	rear = NULL;
}

void ascending_priority::Enqueue(int a)
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

void ascending_priority::Dequeue()
{
	node* current=front;
	node* min;
	node* min_pre;
	node* pre=front;

	while (!(current->next==NULL))
	{

		if (current->next->val < min->val)
		{
			pre = current;
			min = current->next;
		}
		else
		{
			current = current->next;

		}


	}

	min_pre->next = min->next;
	delete min;


	

	
}

ascending_priority::~ascending_priority()
{
}
