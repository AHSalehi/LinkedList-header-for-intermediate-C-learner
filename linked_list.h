#pragma once
#include <stdio.h>
#include <stdlib.h>


typedef struct NODE {
	int value;
	struct NODE* next;
}Node;

Node* new_node(int value) {
	Node* output = (Node*)malloc(sizeof(Node));
	output->value = value;
	output->next = NULL;
	return output;
}



void add_to_end(Node* head, Node* new_node) {
	Node* current; // last node of linked list
	int current_value = new_node->value;
	for (current = head; current->next != NULL; current = current->next);
	if (search(head, current_value) == 1)
		return;
	current->next = new_node;
}

int len(Node* head) {
	int counter = 0;
	while (head != NULL) {
		counter++;
		head = head->next;
	}
	return counter;
}

void add_to_first(Node** head, Node* new_node) {
	new_node->next = *head;
	*head = new_node;
}

Node* find_index(Node* head,int index) { // return index-th node of linked list
	while (index != 0 && head != NULL) {
		head = head->next;
		--index;
	}
	return head;
}

void print_single_node(Node* item) {
	printf("value : %d\n", item->value);
}





void print_list(Node* head) {
	while (head != NULL) {
		printf("%d ", head->value);
		head = head->next;
	}
	printf("\n");
}



