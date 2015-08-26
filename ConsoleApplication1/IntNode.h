//#ifndef INT_LINKED_LIST
//#define INT_LINKED_LIST


class IntNode {
public:
	int info;
	IntNode *next;

	/*
	IntNode() {

		next = 0;
	}
	*/

	IntNode(int el, IntNode *ptr = 0) {
		info = el;
		next = ptr;
	}

};

class IntSLList {
public:
	IntSLList() {
		head = tail = 0;
	}

	~IntSLList();

	int isEmpty() {
		return head == 0;
	}

	//void addToHead(int);

	
	void addToHead(int el) {

		head = new IntNode(el, head);
		// ^
		// Right side: create new node with datum, el. 
		// Left side: set head to it.

		// If from an empty list, new head is the new tail as well.
		if (tail == 0)
			tail = head;

//	 tail             old head     new head
//	 node0   node2     node3       node4

	}
	

	void addToTail(int);
	int deleteFromHead();
	int deleteFromTail();
	void deleteNode(int);
	bool isInList(int) const;

private:
	IntNode *head, *tail;
};


IntSLList::~IntSLList() {
	for (IntNode *p; !isEmpty();) {
		p = head->next;
		delete head;
		head = p;
	}
}

/*
void IntSLList::addToHead(int el) {
	head = new IntNode(el, head);
	if (tail == 0)
		tail = head;
}
*/

//#endif