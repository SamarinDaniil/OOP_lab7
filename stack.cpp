#include "stack.hpp"
#include <iostream>

Stack::Stack()
{
}

void Stack::push(const int d)
{
	appendNode(d);
}

void Stack::pop()
{
	printOne(getSize()-1);
	deleteNode(getSize()-1);
}