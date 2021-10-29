#include <iostream>
#include "list.h"
using namespace std;

int main(int argc, char* argv[]) {
	DList queue;

	initializeDList(queue);

	printList(queue);

	// Insert 5 values
	for (int i = 1; i <= 5; i++) {
		cout << "put: " << 10 * i << endl;
		put(queue, 10 * i);
	}

	printList(queue);

	// Remove 3 values and print them to console
	for (int j = 1; j <= 3; j++) {
		int value;
		if (get(queue, value))
			cout << "     get: " << value << endl;
	}

	printList(queue);

	// Insert 5 values
	for (int i = 6; i <= 10; i++) {
		cout << "put: " << 10 * i << endl;
		put(queue, 10 * i);
	}

	printList(queue);

	// Remove all values and print them
	while (!isEmpty(queue)) {
		int value;
		get(queue, value);
		cout << "     get: " << value << endl;
	}

	printList(queue);

	cin.sync(); cin.get();
	return 0;
}
