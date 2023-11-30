#include "node.h"

int main() {
	node *head = new node;
	head->next = nullptr;
	head->val = 10;

	append_value(head, 5);
}
