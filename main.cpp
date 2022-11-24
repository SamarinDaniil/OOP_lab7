#include "linkedlist.hpp"
#include "stack.hpp"
#include "queue.hpp"
#include <iostream>

using namespace std;



int main()
{

	LinkedList list1;
	LinkedList list2;
	Stack stack1 = Stack();
	Queue q1 = Queue();
	
	list1.appendNode(5);
	list1.appendNode(6);
	list1.appendNode(15);
	list1.insertNode(2, 0);
	
	cout << "Index Operator: " << list1[0] << endl << endl;
	
	cout << "Size: " << list1.getSize() << endl;
	
	cout << endl << "List 1:" << endl;
	list1.print();
	list1.printReverse();
	
	list1.deleteNode(0);
	
	cout << endl << "List 1 (after delete):" << endl;
	list1.print();
	
	list2.appendNode(10);
	list2 = list1;
	list2.appendNode(7);
	
	cout << endl << "List 2:" << endl;
	list2.print();
	cout << endl << "List 2:" << endl;
	list2.insertNode(2, 0);
	list2.printOne(list2.getSize()-1);
	cout << "List 2:" << list2.getSize() << endl;
	list2.print();
	list2.deleteNode(list2.getSize()-1);
	cout << "List 2:" << list2.getSize() << endl;
	list2.print();
	cout << "Stack 1:"<< endl;
	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.pop();
	stack1.pop();
	stack1.pop();
	try
    {
        stack1.pop();
    }
    catch (const char* msg)
    {
        std::cout << msg << std::endl;
    }
	cout << "Queue 1:"<< endl;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.dequeue();
	q1.dequeue();
	q1.dequeue();
	
	return 0;
}