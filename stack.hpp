#ifndef STACK_H
#define	STACK_H

#include "linkedlist.hpp"

class Stack : protected LinkedList
{
	public:
		Stack();
		
		void push(const int);
		void pop();
};

#endif