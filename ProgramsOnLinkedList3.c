/*Wap to search a node at any positon in the linked list*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}node;


void SNAP(node* head, int position) {
    node* current = head;
    int count = 1; 

    while (current != NULL) {
        if (count == position) {
            printf("Found data at position %d: %d\n", position, current->data);
            return;
        }
        count++;
        current = current->next;
    }
    printf("Position %d does not exist in the list.\n", position);
}

void push(node** head_ref, int new_data) {
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    node* head = NULL;
    
  
    push(&head, 40);
    push(&head, 30);
    push(&head, 20);
    push(&head, 10);

    printf("List created: 10 -> 20 -> 30 -> 40 -> NULL\n");

   
    SNAP(head, 3); 
    SNAP(head, 5); 

    return 0;
}