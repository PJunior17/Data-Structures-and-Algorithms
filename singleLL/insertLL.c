#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

void print_nodes(struct node *head) {
	int count = 0;
	if(head == NULL) {
		printf("There is no linked list buva\n");
	}
	struct node *ptr = NULL;
	ptr = head;
	while(ptr != NULL) {
		printf("Index: %d | Value: %d\n", count, ptr->data);
		count++;
		ptr = ptr->link;
	}

}

void add_node_end(struct node *head, int data) {
	struct node *ptr;
	struct node *temp;

	ptr = head;
	temp = malloc(sizeof(struct node));

	temp->data = data;
	temp->link = NULL;

	while(ptr->link != NULL) {
		ptr = ptr->link;
	}
	ptr->link = temp;
}

int main() {
	struct node *head = malloc(sizeof(struct node));
	head->data = 17;
	head->link = NULL;
	
	struct node *current = malloc(sizeof(struct node));
	current->data = 43;
	current->link = NULL;
	head->link = current;
	
	print_nodes(head);
	
	add_node_end(head, 7777);
	add_node_end(head, 2048);
	
	print_nodes(head);

	return 0;
}
