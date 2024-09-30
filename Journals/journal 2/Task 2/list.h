#include"node.h"

class List
{
private:

	node* head;

public:
	List();
	~List();

	bool emptyList();

	void insertafter(int oldV,int newV,string newname);

	void deleteNode(int value);

	void insert_begin(int value,string Name);

	void insert_end(int value,string Name);

	void traverse();

	friend string find_Name(int a,List &list);

};



