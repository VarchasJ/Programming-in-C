#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Helper: Display list
void displayList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// 2a. Insert at Beginning
void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// 2b. Insert at End
void insertAtEnd(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

// 2c. Insert at Any Position (1-based index)
void insertAtPosition(struct Node** head_ref, int new_data, int position) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    
    if (position == 1) {
        new_node->next = *head_ref;
        *head_ref = new_node;
        return;
    }

    struct Node* temp = *head_ref;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range\n");
    } else {
        new_node->next = temp->next;
        temp->next = new_node;
    }
}

int main() {
    struct Node* head = NULL;

    printf("1. Empty List: ");
    displayList(head);

    insertAtBeginning(&head, 10);
    printf("2. After Insert Beginning (10): ");
    displayList(head);

    insertAtEnd(&head, 30);
    printf("3. After Insert End (30): ");
    displayList(head);

    insertAtPosition(&head, 20, 2); // Insert 20 at position 2
    printf("4. After Insert Position 2 (20): ");
    displayList(head);

    return 0;
}