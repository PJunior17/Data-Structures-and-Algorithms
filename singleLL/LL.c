#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

void print_nodes(struct node *head) {
	int count = 0;
	if(head == NULL) {
		printf("There is no linked list bucko\n");
	}

	struct node *ptr = NULL;
	ptr = head;
	while(ptr != NULL) {
		printf("Index: %d | Value: %d | Point: %p | Address: %p\n", count, ptr->data, ptr->link, &ptr); 
		count++;
		ptr = ptr->link;
	}
}

int main() {
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	struct node *current = malloc(sizeof(struct node));
	current->data = 99;
	current->link = NULL;
	head->link = current;

	current = malloc(sizeof(struct node));
	current->data = 4;
	current->link = NULL;

	head->link->link = current;
	
	print_nodes(head);

	return 0;
}

