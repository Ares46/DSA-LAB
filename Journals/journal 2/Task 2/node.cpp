#include"node.h"



node::node()
{
	ID = 0;
	name = " ";
	next = NULL;



}

node::node(int a,string b)
{
	ID = a;
	name = b;
	next = NULL;



}


int node::get_ID() {

	return ID;
}


void node::set_ID(int a) {

	this->ID= a;


}

void node::set_next(node *n) {

	this->next = n;

}

node* node::get_next() {  
	return next;
}

void node::set_name(string a)
{


	name = a;


}

string node::get_name()
{
	return name;



}