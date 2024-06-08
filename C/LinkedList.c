#include <stdio.h>
#include <stdlib.h>

#include "LinkedList.h"

void printLinkedList(node *head) {
	while(head != NULL) {
		printf("%d, ", head->data);
		head = head->next;
	}
}

void insertIntoUnsortedLinkedList(node **head, int data){
	node *newNode = malloc(sizeof(node));
	if(newNode == NULL) {
		printf("Unable to alloc mem for new node\n");
	}
	newNode->data = data;
	newNode->next = NULL;
	if(*head == NULL) {
		*head = newNode;
		return;
	}
	node *curr = *head;
	while(curr->next != NULL)
		curr = curr->next;
	curr->next = newNode;
}

void insertIntoSortedLinkedList(node **head, int data) {
	node *newNode = malloc(sizeof(node));
	if(newNode == NULL) {
		printf("Unable to alloc mem for new node\n");
	}
	newNode->data = data;
	newNode->next = NULL;
	if(*head == NULL) {
		*head = newNode;
		return;
	}
	node *curr = *head;
	while(curr->next != NULL && curr->data <= data)
		curr = curr->next;
	newNode->next = curr->next;
	curr->next = newNode;
}
