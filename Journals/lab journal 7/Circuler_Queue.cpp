#include "Circuler_Queue.h"


Circuler_Queue::Circuler_Queue(int a)
{
	n = a;
}

bool Circuler_Queue::Empty()
{
	if (front ==-1 && tail==-1 )
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Circuler_Queue::Full()
{
	if (tail == (n - 1))
	{
		return true;
	}
	else
	{
		return false;
	}




}

int Circuler_Queue::getFront()
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


void Circuler_Queue::Enqueue(int a)
{
	if (Empty())
	{
		front = 0;
		tail = 0;
		arr[front] = a;


	}
	else if(!Full())

	{
		arr[tail + 1 % n] = a;

	}




}

void Circuler_Queue::Dequeue()
{
	if (!Empty())
	{
		front= (front+1)% n;

	}
	else if (front == tail)
	{
		front = -1;
		tail = -1;


	}
	else
	{
		cout << "Queue is empty";
	}


}


Circuler_Queue::~Circuler_Queue()
{
}
