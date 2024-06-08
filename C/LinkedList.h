#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

typedef struct node {
	int data;
	struct node *next;
} node;

void printLinkedList(node *head);
void insertIntoUnsortedLinkedList(node **head, int data);
void insertIntoSortedLinkedList(node **head, int data);

#endif
