#include "static_Queue.h"

static_Queue::static_Queue(int a)
{
	n = a;
}

bool static_Queue::Empty()
{
	if (front == tail)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool static_Queue::Full()
{
	if (tail==(n-1))
	{
		return true;
	}
	else
	{
		return false;
	}




}

int static_Queue::getFront()
{
	if (!Empty)
	{
		return arr[0];

    }
	else
	{

		cout << "Queue is empty";
		return -1;
	}





}


void static_Queue::Enqueue(int a)
{
	if (!Full())
	{
		arr[++tail] = a;

	}
	else
	{
		cout << "Queue is full";
	}




}

void static_Queue::Dequeue()
{
	if (!Empty())
	{
		front++;

	}
	else
	{
		cout << "Queue is empty";
	}


}



static_Queue::~static_Queue()
{
}
