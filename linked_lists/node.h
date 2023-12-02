#ifndef NODE_H
#define NODE_H

struct node {
	int val;
	node* next;
};

void push_back(node *head, int val) {
	node* new_node = new node;
	new_node->next = nullptr;
	new_node->val = val;
	
	node* itr = head;
	while(itr->next != nullptr) {
		itr = itr->next;
	}
	itr->next = new_node;
}

void pop_front(node*& head) {
	node* second_element = head->next;
	delete head;
	head = second_element;
}

#endif
