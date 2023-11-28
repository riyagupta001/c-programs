
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *head = NULL;

void Insert_Beginning(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

int Search(int key) {
    Node *current = head;
    int position = 1;

    while (current != NULL) {
        if (current->data == key) {
            return position;
        }
        current = current->next;
        position++;
    }

    return -1;
}

void Display() {
    Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int N, searchKey;
    printf("Enter the number of nodes to create: ");
    scanf("%d", &N);

	for(int i=0; i<N; i++)
	{
        int data;
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        Insert_Beginning(data);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &searchKey);

    int position = Search(searchKey);

    if (position != -1)
        printf("Element found at position: %d\n", position);
    else
        printf("Element not found in the linked list.\n");

    Display();

    return 0;
}
