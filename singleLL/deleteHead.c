#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

void add_end(struct node *head, int data) {
	struct node *new = malloc(sizeof(data));
	new->data = data;
	new->link = NULL;

	struct node *ptr;
	ptr = head;

	while(ptr->link != NULL) {
		ptr = ptr->link;
	}
	ptr->link = new;
}

struct node* delete_head(struct node *head) {
	if(head == NULL) {
		printf("null brotha\n");
	} else {
		struct node *temp = head;
		head = head->link;
		free(temp);
		temp = NULL;
	}
	return head;
}

void print_nodes(struct node *head) {
	struct node *ptr;
	ptr = head;
	
	int count = 0;
	while(ptr != NULL) {
		printf("Index: %d | Value: %d\n", count, ptr->data);
		ptr = ptr->link;
		count++;
	}
}

int main() {
	struct node *head = malloc(sizeof(struct node));
	head->data = 17;
	head->link = NULL;

	add_end(head, 55);
	add_end(head, 33);
	print_nodes(head);
	printf("\n");

	head = delete_head(head);
	print_nodes(head);
	printf("\n");

	head = delete_head(head);
	print_nodes(head);
	printf("\n");

	head = delete_head(head);
	print_nodes(head);
	printf("\n");

	head = delete_head(head);
	print_nodes(head);
	printf("\n");

	return 0;
}
