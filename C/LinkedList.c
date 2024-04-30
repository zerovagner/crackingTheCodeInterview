#include<malloc.h>

typedef struct Node {
	int data;
	Node *next;
} Node;

void printLinkedList(Node *head) {
	while(head != NULL) {
		printf("%d, ", head->data);
		head = head->next;
	}
}

void insertIntoUnsortedLinkedList(Node *head, int data){
	Node *newNode = malloc(sizeof(Node));
	if(newNode == NULL) {
		printf("Unable to alloc mem for new node\n");
	}
	newNode->data = data;
	newNode->next = NULL:
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(head->next != NULL)
		head = head->next;
	head->next = newNode;
}

void insertIntoSortedLinkedList(Node *head, int data) {
	Node *newNode = malloc(sizeof(Node));
	if(newNode == NULL) {
		printf("Unable to alloc mem for new node\n");
	}
	newNode->data = data;
	newNode->next = NULL:
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(head->next != NULL && head->data <= data)
		head = head->next;
	newNode->next = head->next;
	head->next = newNode;
}
