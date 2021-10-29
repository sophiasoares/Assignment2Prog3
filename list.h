#ifndef LIST_H_
#define LIST_H_

/**
 * @brief Definition of a list element
 * @struct DListElem
 * @var info
 * @var next
 * @var previous
 * @author Sophia Soares Silva
 */
struct DListElem {
	int        info;
	DListElem* next;
	DListElem* previous;
};


/**
 * @brief Definition of a list
 * @struct DList
 * @var first
 * @var last
 * @author Sophia Soares Silva
 */
struct DList {
	DListElem* first;
	DListElem* last;
};

void initializeDList(DList& dl);
void put(DList& dl, int val);
bool get(DList& dl, int& val);
bool isEmpty(DList dl);
void printList(DList lst);

#endif /* LIST_H_ */
