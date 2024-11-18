#include<iostream>

using namespace std;
class Circuler_Queue
{
public:
	int n; // size
	int* arr = new int[n];
	int front = -1;
	int tail = -1;
public:
	Circuler_Queue(int a);
	void Enqueue(int a);
	void Dequeue();
	bool Empty();
	bool Full();
	int getFront();	Circuler_Queue();
	~Circuler_Queue();
};

