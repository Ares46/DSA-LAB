#include "stack.h"



stack::stack()
{
	head = NULL;
}



void stack::isEmpty()
{
	if (head == NULL)  //checks to ius if the head poinbts to null
	{
		cout << "Stack is empty\n";  //returns 'stack is empty' if condition is true 
	}
	else
	{
		cout << "stack is not empty\n"; //returns 'stack is not empty' if condition is false

	}

}


void stack::push(int a)
{
	node* new_node = new node(a);
	if (head == NULL)
	{

		head = new_node;  //makes the head point to the new node
	}
	else
	{

		new_node->next = head;  //the new node points to the mode pointed by the head

		head = new_node;  //the head now points to the new node




	}

}

int stack::peek()
{
	if (head == NULL)
	{
		cout << "no element in the stack";

	}
	else
	{
		return head->data;  //returns the first valu of head 
	}


}

int stack::pop()
{
	if (head == NULL)
	{
		cout << "no element in the stack";

	}
	else
	{
		int val = head->data; //stores the value to pop
		node* temp = head;  // stores the address to deleat

		head = head->next;  //points to the next value 
		delete temp; //deleats the address
		return val; //returs value
	}


}

int stack::size()
{
	int count = 0;
	node* current = head;  //a temparary node which acts like head

	if (head == NULL)
	{
		return count; //returns 0 if stack is empty

	}
	else
	{
		while (current != NULL)
		{
			count++; //counts the node in the stack 
			current = current->next; //moves to the next node


		}


		return count; //returns the count after the loop is compleat
	}





}

void stack::print()
{
	if (head == NULL)
	{
		cout << head->data;

	}
	else
	{
		bool changes = false;  //a boolen to check if we need to to make changes in the stack
		node* current = head;
		int temp; // variable we made to store the data we about to swap

		do
		{
			if (current->data > current->next->data)  //checks to see if current nodes data is greater then the next one
			{
				temp = current->data;   //stores the data we about to swap 
				current->data = current->next->data; //changes the current nodes vale to the data in the next one
				current->next->data = temp; //changes the next node data to the one stored in temp
				changes = true; // turns true to show changes are needed

			}
			current = current->next; //travers
			if (current == NULL) //if we reach the end reset current 
			{
				current = head;

			}


		} while (changes != true);

		node* n = head;

		while (n != NULL)
		{

			cout << n->data << endl;
			n = n->next; //moves to the next node


		}

	}

}

void main()
{
	stack a;

	a.push(9); //pushes 9
	a.push(5); //pushes 5
	a.push(7); //pushes 7

	a.print();




}
