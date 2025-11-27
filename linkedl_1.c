/*Wap to insert a node at last*/
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node*next;

}node;

void insertATL(node**head, int value){
    node*newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    if(*head == NULL){
        *head=newNode;
        return;
    }
    node*temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode; //link the last node to the new node
};
void printList(struct Node *node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    node*head = NULL; 

    insertATL(&head, 10);
    insertATL(&head, 20);
    insertATL(&head, 30);

    printf("Linked List: ");
    printList(head);

    return 0;
}