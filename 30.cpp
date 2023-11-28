
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

void Insert_Position(int data, int position) {
if (position < 1) {
    printf(" Position should be 1 or greater.\n");
    return;
    }
Node *newNode = (Node *)malloc(sizeof(Node));
newNode->data = data;
if (position == 1) {
    newNode->next = head;
    head = newNode;
    return;
    }
Node *current = head;
int currentPosition = 1;
while (current != NULL && currentPosition < position - 1) {
    current = current->next;
    currentPosition++;
    }
if (current == NULL) {
    printf("Invalid position. .\n");
    free(newNode);
    return;
    }
newNode->next = current->next;
current->next = newNode;
}

void Insert_End(int data) {
Node *newNode = (Node *)malloc(sizeof(Node));
newNode->data = data;
newNode->next = NULL;
if (head == NULL) {
    head = newNode;
    return;
    }
Node *current = head;
while (current->next != NULL) {
    current = current->next;
    }
current->next = newNode;
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
int choice, data, position;
while (1) {
    printf("\nMenu:\n");
    printf("1. Insert at the  Beginning\n");
    printf("2. Insert at Specified Position\n");
    printf("3. Insert at the End\n");
    printf("4. Display\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter data to insert at beginning: ");
            scanf("%d", &data);
            Insert_Beginning(data);
            break;
        case 2:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            printf("Enter position to insert: ");
            scanf("%d", &position);
            Insert_Position(data, position);
            break;
        case 3:
            printf("Enter data to insert at end: ");
            scanf("%d", &data);
            Insert_End(data);
            break;
        case 4:
            Display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
return 0;
}
