#include "HList.h"

HList::HList()
{
	head = new node;

}

bool HList::emptyList() {

	if (head->get_next() == NULL) {

		return true;
	}

	else
	{
		return false;
	}


}

void HList::insertafter(int old, int New)
{
	node* current = head->get_next(); //points on the current node

	if (head->get_next() == NULL)
	{
		head->set_next(new node(New));
	}

	while (true) {


		if (current->get_val() == old) //once value found
		{
			node* Newnode = new node(New); //makes a new node

			Newnode->set_next(current->get_next()); //give node the address of the node withe previous one

			current->set_next(Newnode); //makes the old node store the address of the new node

			break;

		}
		else if (current->get_val() != old && current->get_next() != NULL) //if value not found and not endthen travers
		{
			current = current->get_next();



		}

		else if (current->get_next() == NULL)
		{
			node* Newnode = new node(New); //make a new node

			current->set_next(Newnode);
			Newnode->set_next(NULL);


			break;

		}

	}
}

void HList::deleteNode(int value) {
	node* current = head->get_next();

	if (emptyList()) {
		cout << "List is empty" << endl;
		return;
	}


	// Traverse the list to find the node before the one to be deleted
	while (current->get_next() != NULL) {
		//if found the postion
		if (current->get_next()->get_val() == value) {
			node* temp = current->get_next();
			current->set_next(temp->get_next());
			delete temp;
			return;
		}
		current = current->get_next();
	}

	//if value mot found
	cout << "Value: " << value << " not found in list" << endl;
}


void HList::insert_begin(int value)
{


	node* Newnode = new node(value); //making new node

	Newnode->set_next(head->get_next());
	head->set_next(Newnode);





}

void HList::insert_end(int value)
{
	node* current = head; // current position pointer
	node* Newnode = new node(value); // make a new node
	Newnode->set_next(NULL); //we made the new node

	while (true)
	{

		//once we reached the end
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


void HList::delete_begin()
{
	node* temp = head->get_next(); //stores the first node
	head->set_next(temp->get_next()); //makes the dummy point to the next node pointed by temp 

	delete temp; //deleats the node



}


void HList::delete_end()
{
	node* current = head->get_next(); //points to current 
	node* pre = head->get_next(); //points to one before current

	while (true)
	{
		if (current->get_next() != NULL) //checks to see if the next of current is not empty
		{
			pre = current;
			current = current->get_next();  //travering till end


		}
		else
		{
			break; //if the next element is empty
		}


	}

	pre->set_next(NULL); //makes the previous node to point to NULL
	
	delete current;  //delets the current node



}





void HList::traverse()
{
	node* current = head->get_next(); //starts after dummy head 

	while (current != NULL)   //outputs data before reaching null
	{




		cout << current->get_val() << endl; 
		current = current->get_next();


	}

	if (head->get_next()== NULL)
	{
		cout << "List is empty";
	}







}



void main()
{
	// Create a new linked list
	HList* a = new HList;

	// Insert values at the end of the list
	a->insert_end(1);
	a->insert_end(2);
	a->insert_end(3);
	a->insert_end(4);
	a->insert_end(5);

	// Display the current nodes in the list
	cout << "Nodes:\n";
	a->traverse();

	// Delete the node with value 3 and display the updated list
	cout << "Delete 3:\n";
	a->deleteNode(3);
	a->traverse();

	// Delete the first node (beginning) of the list and display the updated list
	cout << "Delete begin:\n";
	a->delete_begin();
	a->traverse();

	// Delete the last node (end) of the list and display the updated list
	cout << "Delete end:\n";
	a->delete_end();
	a->traverse();

	// Clean up memory (optional, good practice)
	delete a;

}