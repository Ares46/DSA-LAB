#include<iostream>
#include "node.h"
using namespace std;
class ascending_priority
{
       node* head;
	   node* front;
	   node* rear;
public:
	ascending_priority();
	void Enqueue(int a);
	void Dequeue();

	ascending_priority();
	~ascending_priority();
};

