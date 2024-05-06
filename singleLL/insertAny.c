#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

void add_node_pos(struct node *head, int data, int pos) {
	struct node *ptr = head;
	struct node *ptr2 = malloc(sizeof(struct node));

	ptr2->data = data;
	ptr2->link = NULL;

	while(pos != 1) {
		ptr = ptr->link;
		pos--;
	}

	ptr2->link = ptr->link;
	ptr->link = ptr2;
}

void add_end(struct node *head, int data) {
	struct node *new = malloc(sizeof(struct node));
	new->data = data;
	new->link = NULL;
	
	struct node *ptr;
	ptr = head;
	
	while(ptr->link != NULL) {
		ptr = ptr->link;
	}
	ptr->link = new;
}

void print_nodes(struct node *head) {
	struct node *ptr = head;
	
	int count = 0;
	while(ptr != NULL) {
		printf("Value: %d | Index: %d\n", ptr->data, count);
		ptr = ptr->link;
		count++;
	}
}

int main() {
	struct node *head = malloc(sizeof(struct node));
	head->data = 17;
	head->link = NULL;
	
	add_end(head, 55);
	add_end(head, 14444);
	
	add_node_pos(head, 555555555, 2);

	add_end(head, 7777);
	add_end(head, 2222222);
	
	add_node_pos(head, 36, 5);

	print_nodes(head);

	return 0;
}

