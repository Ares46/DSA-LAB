#include<iostream>
using namespace std;

class node {
private:
	int ID;
	string name;
	node* next;

public:
	node(int,string);
	node();
	int get_ID();
	void set_ID(int);
	string get_name();
	void set_name(string);
	void set_next(node*);
	node* get_next();


	

}; 
