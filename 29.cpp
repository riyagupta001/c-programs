#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *head = NULL;
void Delete_Beginning() {
if (head == NULL) {
    printf("List is empty. Nothing to delete.\n");
    return;
    }
Node *temp = head;
head = head->next;
free(temp);
}
void Delete_Position(int position) {
if (position < 1) {
    printf("Invalid position. Position should be 1 or greater.\n");
    return;
    }
if (head == NULL) {
    printf("List is empty. Nothing to delete.\n");
    return;
    }
if (position == 1) {
    Delete_Beginning();
    return;
    }
Node *current = head;
Node *prev = NULL;
int currentPosition = 1;
while (current != NULL && currentPosition < position) {
    prev = current;
    current = current->next;
    currentPosition++;
    }
if (current == NULL) {
    printf("Invalid position. The list is not long enough.\n");
    return;
    }
prev->next = current->next;
free(current);
}
void Delete_End() {
if (head == NULL) {
    printf("List is empty. Nothing to delete.\n");
    return;
    }

if (head->next == NULL) {
    free(head);
    head = NULL;
    return;
    }
Node *current = head;
Node *prev = NULL;
while (current->next != NULL) {
    prev = current;
    current = current->next;
    }
prev->next = NULL;
free(current);
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
int choice, position;
while (1) {
    printf("\nMenu:\n");
    printf("1. Delete from Beginning\n");
    printf("2. Delete from Specified Position\n");
    printf("3. Delete from End\n");
    printf("4. Display\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
switch (choice) {
        case 1:
            Delete_Beginning();
            break;
        case 2:
            printf("Enter position to delete: ");
            scanf("%d", &position);
            Delete_Position(position);
            break;
        case 3:
            Delete_End();
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
