#include <iostream>
#include "list.h"
using namespace std;

/**
 * @brief Method to initialize dl as empty list
 * @param dl
 * @author Sophia Soares Silva
 */
void initializeDList(DList& dl) {
	dl.first = 0;
	dl.last = 0;
}


/**
 * @brief Method to insert a new element with value val at the beginning of the list
 * @param dl
 * @param val
 * @author Sophia Soares Silva
 */
void put(DList& dl, int val) {
	// Create new element about to be inserted
	DListElem* newElem = new DListElem;

	// Fill out information about the new element
	newElem->info = val;
	newElem->next = dl.first;
	newElem->previous = 0;

	// If the list is not empty, change the "previous" element of the first element of the list to the new element
	if(dl.first != 0) dl.first->previous = newElem;

	// If the list is empty, set the last element of the list as the new element
	if (dl.first == 0) dl.last = newElem;

	// Set the first element of the list as the new element
	dl.first = newElem;
}


/**
 * @brief Method to remove an item (if possible) from the end of the list
 * @param dl
 * @param val
 * @return boolean
 * @author Sophia Soares Silva
 */
bool get(DList& dl, int& val) {
	if (dl.first == 0) return false;

	DListElem* tmp = dl.first;

	// Find the last element and store it in "tmp"
	for (; tmp->next != 0; tmp = tmp->next);

	// If the last element is also the first element (the only one in the list)
	if (tmp->previous == 0) {
		dl.first = 0;
		dl.last = 0;
	} else {
		tmp->previous->next = 0;
		tmp->previous = 0;
	}
	// Return the value of the last element
	val = tmp->info;

	// Release memory
	delete tmp;

	return true;
}


/**
 * @brief Method to check if the list is empty
 * @param dl
 * @return boolean
 * @author Sophia Soares Silva
 */
bool isEmpty(DList dl) {
	if (dl.first == 0) return true;
	return false;
}


/**
 * @brief Method to print out all the elements of the list and return if the list is empty
 * @param dl
 * @author Sophia Soares Silva
 */
void printList(DList dl) {
	if (isEmpty(dl)) {
		cout << "\n---> The list is empty!\n" << endl;
		return;
	}
	DListElem* lst = dl.first;

	cout << "\nElements of the list:" << endl;

	for (; lst != 0; lst = lst->next) {
		cout << lst->info << " ";
	}
	cout << endl;
	cout << endl;
}
