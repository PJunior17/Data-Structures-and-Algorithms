#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node* add_to_beg(struct node *head, int data) {
	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = data;
	ptr->link = NULL;

	ptr->link = head;
	head = ptr;
	return head;
}

int main() {
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;
	
	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = 777;
	ptr->link = NULL;

	head->link = ptr;

	head = add_to_beg(head, 66666);
	ptr = head;
	
	while(ptr != NULL) {
		printf("Value: %d\n", ptr->data);
		ptr = ptr->link;
	}

	return 0;
}

