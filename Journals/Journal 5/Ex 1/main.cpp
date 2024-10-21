#include "DList.h"

void main()
{
	DList a;

	a.insert_begin(3);
	a.insert_begin(2);
	a.insert_end(4);

	a.deleteNode(3);
	a.insert_after(4, 5);
	a.traverse();




}