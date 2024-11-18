#include<iostream>
#include "node.h"
using namespace std;

class LinkList_Queue
{
	node* head;
	node* front;
	node* rear;
public:
	LinkList_Queue();
	void Enqueue(int a);
	void Dequeue();

	~LinkList_Queue();
};

