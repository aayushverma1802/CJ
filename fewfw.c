/* C Program to remove duplicates in an unsorted
linked list */
#include<stdio.h>
#include<stdlib.h>

/* A linked list node */
typedef struct Node {
	int data;
	struct Node* next;
} Node;

// Utility function to create a new Node
Node* newNode(int data)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = data;
	temp->next = NULL;
	return temp;
}

/* Function to remove duplicates from a
unsorted linked list */
void removeDuplicates(Node* start)
{
	Node *ptr1, *ptr2, *dup;
	ptr1 = start;

	/* Pick elements one by one */
	while (ptr1 != NULL && ptr1->next != NULL) {
		ptr2 = ptr1;

		/* Compare the picked element with rest
		of the elements */
		while (ptr2->next != NULL) {
			/* If duplicate then delete it */
			if (ptr1->data == ptr2->next->data) {
			
				dup = ptr2->next;
				ptr2->next = ptr2->next->next;
				free(dup);
			}
			else 
				ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
}


void printList(struct Node* node)
{
	while (node != NULL) {
		printf("%d ", node->data);
		node = node->next;
	}
}


int main()
{

	struct Node* start = newNode(10);
	start->next = newNode(12);
	start->next->next = newNode(11);
	start->next->next->next = newNode(11);
	start->next->next->next->next = newNode(12);
	start->next->next->next->next->next = newNode(11);
	start->next->next->next->next->next->next = newNode(10);

	printf("Linked list before removing duplicates ");
	printList(start);

	removeDuplicates(start);

	printf("\nLinked list after removing duplicates ");
	printList(start);

	return 0;
}

