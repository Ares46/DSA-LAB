#include "list.h"


List::List()
{
	head = NULL;

}

bool List::emptyList(){

	if (head == NULL) {

		return true;
	}

	else
	{
		return false;
	}


}

void List::insertafter(int old, int New,string Newname)
{
	node* current = head; //points on the current node

	if (head == NULL)
	{
		cout << "List is empty";
		return;
	}

	while (true) {


		if (current->get_ID() == old) //once value found
		{
			node* Newnode = new node(New,Newname); //makes a new node

			Newnode->set_next(current->get_next()); //give node the address of the node withe previous one

			current->set_next(Newnode); //makes the old node store the address of the new node

			break;

		}
		else if (current->get_ID() != old && current->get_next() != NULL) //if value not found and not endthen travers
		{
			current = current->get_next();



		}

		else if (current->get_next() == NULL)
		{
			node* Newnode = new node(New,Newname); //make a new node

			current->set_next(Newnode);
			Newnode->set_next(NULL);


			break;

		}

	}
}

void List::deleteNode(int value) {
	node* current = head;

	if (head == NULL) {
		cout << "List is empty" << endl;
		return;
	}


	// Traverse the list to find the node before the one to be deleted
	while (current->get_next() != NULL) {
		if (current->get_next()->get_ID() == value) {
			node* temp = current->get_next(); 
			current->set_next(temp->get_next());
			delete temp; 
			return;
		}
		current = current->get_next(); 
	}

	
	cout << "Value: " << value << " not found in list" << endl;
}


void List::insert_begin(int ID,string Name) 
{
	if (head == NULL) {
		head = new node(ID,Name);
		head->set_next(NULL);
	}
	else {

		
		node* Newnode = new node(ID,Name); //making new node

		Newnode->set_next(head);
		head=Newnode;
		
	}

  

}

void List::insert_end(int ID,string Name)
{
	node* current = head;
	node* Newnode = new node(ID,Name);
	Newnode->set_next(NULL);
	while (true)
	{


		if (current->get_next() == NULL)
		{


			current->set_next(Newnode);

			break;

		}
		else
		{

			current = current->get_next();

		}

	}

}

void List::traverse()
{
	node* current = head;

	while (current != NULL)
	{


	

		cout << "ID:"<<current->get_ID()<<" Name: "<<current->get_name() << endl;
		current = current->get_next();


	}

	if(head==NULL)
	{
		cout << "List is empty";
	}



	



}

string find_Name(int a,List &b)
{
	if (b.head->get_ID() == a)
	{
		return (b.head->get_name());

    }
	node* current = b.head;
	
	
		while (current!=NULL)
		{
			if (current->get_ID() == a)
			{
				return current->get_name();

			}
			else
			{
				current = current->get_next();
			}




		}

		cout << "Name not found in the list";




}

void main()
{
	List* a=new List;


	a->insert_begin(000,"Ishmam");
	a->insertafter(000, 001, "Asim");
	a->insert_end(002,"Ali");
	a->deleteNode(001);
	a->insert_end(003, "Sam");
	a->traverse();
	cout << "Finding name of ID:002 is: " << find_Name(002, *a);


}