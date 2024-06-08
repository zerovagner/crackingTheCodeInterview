#include<stdio.h>
#include<stdlib.h>

#include "LinkedList.h"

#define MAXSIZE 2048

void removeDupsWithAuxiliaryDataStructure(node **head) {
	printf("\nWITH auxiliary structure it is. ");
	int ints[MAXSIZE] = {0};
	node *tmp = NULL;
	while(*head != NULL) {
		if(!ints[(*head)->data]) {
			ints[(*head)->data] = 1;
		}
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	node *newHead = NULL;
	for(int i = 0; i < MAXSIZE; ++i) {
		if(ints[i]) {
			insertIntoUnsortedLinkedList(&newHead, i);
		}
	}
	*head = newHead;	
}

void removeDupsWithoutAuxiliaryDataStructure(node *head) {
	printf("\nWITHOUTt auxiliary structure it is. ");
	node *current, *before;
	while(head != NULL) {
		before = head;
		current = head->next;
		while(current != NULL) {
			if(head->data == current->data) {
				before->next = current->next;
				free(current);
			} else {
				before = before->next;
			}
			current = current->next;
		}
		head = head->next;
	}
}

int main(int argc, char **argv) {
	int option = -1;
	int number = 0;
	node* head = NULL;

	while(option != 0 && option != 1) {
		printf("\nSelect option\n0 - WITHOUT auxiliary data structures\n1 - WITH auxiliary data structures\n\nOption:");
		scanf("%d", &option);
		fflush(stdin);
	}
	printf("Type in the numbers to add to the list, one by one - type a letter to finish\n");
	while( scanf("%d", &number) == 1) {
		fflush(stdin);
		insertIntoUnsortedLinkedList(&head, number);	
	}

	printf("\nBefore removing duplicates, the list looks like this: ");
	printLinkedList(head);

	if(option)
		removeDupsWithAuxiliaryDataStructure(&head);
	else
		removeDupsWithoutAuxiliaryDataStructure(head);

	printf("\nRemoving the duplicates, the list is now: ");
	printLinkedList(head);
	return 1;
}
