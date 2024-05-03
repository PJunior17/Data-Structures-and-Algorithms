#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node* add_to_end(struct node *ptr, int data) {
	struct node *temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->link = NULL;

	ptr->link = temp;
	return temp;
}

void print_nodes(struct node *head) {
	int count = 0;
	if(head == NULL) {
		printf("No linked list dood\n");
	}
	struct node *ptr = NULL;
	ptr = head;
	while(ptr != NULL) {
		printf("Index: %d | Value: %d\n", count, ptr->data);
		count++;
		ptr = ptr->link;
	}
}

int main() {
	struct node *head = malloc(sizeof(struct node));
	head->data = 17;
	head->link = NULL;
	
	struct node *ptr = head;
	ptr = add_to_end(ptr, 68);
	ptr = add_to_end(ptr, 9999);
	ptr = add_to_end(ptr, 46);

	ptr = head;
	
	print_nodes(ptr);

	return 0;

}
