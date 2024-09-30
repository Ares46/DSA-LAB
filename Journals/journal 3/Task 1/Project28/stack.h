#include"node.h"

class stack
{
public:
	node* head;

	stack();
	/*

	@breif : adds a integert in the stack
	@premp:the value we want to enter

	*/
	void push(int);
	/*

	@breif : we get the first value in the stack and we later deleat that node from the stack

	*/
	int pop();
	/*

	@breif : we get the first value in the stack

	*/
	int peek();
	/*

	@breif : checks if the stack is empty

	*/
	void isEmpty();
	/*

	@breif : returns the size of the stack

	*/
	int size();

	void print();
};

