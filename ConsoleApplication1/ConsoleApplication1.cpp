// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*
void IntSLList::addToHead(int el) {
	head = new IntNode(el, head);
	if (tail == 0)
		tail = head;
}
*/

int _tmain(int argc, _TCHAR* argv[])
{
	/*
	IntNode *p = new IntNode(3);
	p->next = new IntNode(4);


	std::cout << p->info << "\r\n";
	std::cout << p->next->info << "\r\n";
	*/

	IntSLList *new1 = new IntSLList();

	new1->addToHead(4);
	new1->addToHead(5);
	new1->addToHead(6);
	new1->addToTail(1000);

	return 0;
}

