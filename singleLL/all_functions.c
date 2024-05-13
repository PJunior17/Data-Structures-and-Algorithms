#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

void insertBeg(struct node **head, int data) {
	struct node *new = malloc(sizeof(struct node));
	if(new == NULL) {
		printf("null brodie\n");
	}
	new->data = data;
	new->link = *head;
	*head = new;
}

void insertEnd(struct node *head, int data) {
	struct node *ptr;
	ptr = head;

	struct node *new = malloc(sizeof(struct node));
	if(new == NULL) {
		printf("null brodie\n");
	}
	new->data = data;
	new->link = NULL;

	while(ptr->link != NULL) {
		ptr = ptr->link;
	}
	ptr->link = new;
}

void insertPos(struct node *head, int pos, int data) {
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

struct node* deleteBeg(struct node *head) {
	if(head == NULL) {
		printf("Null");
	} else {
		struct node *temp = head;
		head = temp->link;
		free(temp);
		temp->link = NULL;
	}
	return head;
}

struct node* deleteEnd(struct node *head) {
	if(head == NULL) {
		printf("Null");
	} else {
		struct node *temp = head;
		struct node *ptr;
		while(temp->link != NULL) {	
			ptr = temp;
			temp = temp->link;
		}
		ptr->link = NULL;
		free(temp);
	}
	return head;
}

void deletePos(struct node **head, int pos) {
	struct node* current = *head;
	struct node* previous = *head;
	if(*head == NULL) {
		printf("NULL");
	} else if(pos == 1) {
		*head = current->link;
		free(current);
		current = NULL;
	} else {
		while(pos != 1) {
			previous = current;
			current = current->link;
			pos--;
		}
		previous->link = current->link;
		free(current);
		current = NULL;
	}

}

struct node* reverse(struct node *head) {
	struct node *pre;
	struct node *cur;
	struct node *post;
	pre = NULL;
	cur = head;

	while(cur != NULL) {
		post = cur->link;
		cur->link = pre;
		pre = cur;
		cur = post;
	}
	head = pre;
	return head;
}

void printNodes(struct node *head) {
	struct node *ptr = head;
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
	
	insertEnd(head, 1);
	insertEnd(head, 66);
	insertEnd(head, 55555);

	insertBeg(&head, 4545);
	insertBeg(&head, 212898);

	insertPos(head, 2, 978);
       
	printNodes(head);	
	printf("--------------------------------\n");

	head = deleteBeg(head);
	printNodes(head);
	printf("--------------------------------\n");
	
	head = deleteEnd(head);
	printNodes(head);
	printf("--------------------------------\n");

	deletePos(&head, 2);
	printNodes(head);
	printf("--------------------------------\n");
	
	head = reverse(head);
	printNodes(head);
	return 0;
}
