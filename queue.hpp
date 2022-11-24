#ifndef QUEUE_H
#define	QUEUE_H

#include "linkedlist.hpp"

class Queue : protected LinkedList
{
	public:
		Queue();
		
		void enqueue(const int);
		void dequeue();
};

#endif
