#include "node.h"



node::node()
{
	val = 0;
	next = NULL;
}

node::node(int a)
{
	val = a;
	next = NULL;
}



node::~node()
{
}
