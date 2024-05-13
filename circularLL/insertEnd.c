#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

void insertEnd(struct node **head, int data) {
	struct node *new = malloc(sizeof(struct node));
	if(new == NULL) {
		printf("Null");
	}
	new->data = data;
	new->link = new;
	struct node *temp = NULL;

	if(*head == NULL) {
	       *head = new;
	} else {
		temp = *head;
		while(temp->link != *head) {
			temp = temp->link;
		}
		temp->link = new;
	}	
	new->link = *head;
}

void printNodes(struct node *head) {
	struct node *ptr = head;
	int count = 0;
	if(head != NULL) {
		do {
			printf("Index: %d | Value: %d\n", count, ptr->data);
			ptr = ptr->link;
			count++;
		} while(ptr != head);
	}
	
}


int main() {
	struct node *head = NULL;
	
	insertEnd(&head, 17);
	insertEnd(&head, 22);
	printNodes(head);
	return 0;
}
