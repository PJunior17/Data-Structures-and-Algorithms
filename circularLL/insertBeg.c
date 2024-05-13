#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

void insertBeg(struct node **head, int data) {
	struct node *new = malloc(sizeof(struct node));
	new->data = data;
	new->link = *head;

	if(*head != NULL) {
		struct node *temp = *head;
		while(temp->link != *head) {
			temp = temp->link;
		}
		temp->link = new;
	} else {
		new->link = new;
	}

	*head = new;
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

	insertBeg(&head, 44);
	printNodes(head);
	printf("-----------------------------------------\n");

	insertBeg(&head, 17);
	printNodes(head);
		
	return 0;
}	


