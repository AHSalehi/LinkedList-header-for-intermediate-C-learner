#include "header.h"

int main() {
	Node* node = new_node(0);
	int n;
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &n);
		add_to_end(node, new_node(n));
	}
	print_list(node);
	printf("length of linked list till here : %d\n", len(node));
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &n);
		add_to_first(&node, new_node(n));
	}
	print_list(node);
	printf("length of linked list till here : %d\n", len(node));

	for (int i = 0; i < 10; i++) {
		printf("Enter index of one node you want to know : ");
		scanf_s("%d", &n);
		print_single_node(find_index(node, n));
	}

}