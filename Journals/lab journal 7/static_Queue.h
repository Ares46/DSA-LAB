#include<iostream>

using namespace std;

class static_Queue
{
	int n; // size
	int* arr = new int[n];
	int front = -1;
	int tail = -1;
public:
	static_Queue(int a);
	void Enqueue(int a);
	void Dequeue();
	bool Empty(); 
	bool Full();
	int getFront();

	~static_Queue();
};

