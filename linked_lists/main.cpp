#include <iostream>

#include "node.h"

using namespace std;

int main() {
	node *head = new node;
	head->next = nullptr;
	head->val = 5;

	push_back(head, 7);

	pop_front(head);

	cout << head->val << endl; // Print: 7
}
