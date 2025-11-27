/*Wap to delete a node from a linked list*/

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

void TerminateN(node **head, int value){
    node*temp=*head;
    node*prev=NULL; 
    while( temp != NULL && temp->data != value){
        prev=temp;
        temp=temp->next;
    }
    if(temp == NULL){
        printf("Value not found in the list\n");
        return;
    }
    if(prev == NULL){
        *head=temp->next;
    }else{
        prev->next=temp->next;

    }
    free(temp);
    printf("Node with value %d deleted successfully\n", value);

}

void printList(node*node){
    while(node!=NULL){
        printf("%d -> ",node->data);
        node=node->next;
    }
    printf("NULL\n");
}

int main(){
    node*head=NULL;

   
    insertATL(&head,10);
    insertATL(&head,20);
    insertATL(&head,30);
    insertATL(&head,40);

    printf("Original Linked List: ");
    printList(head);

    int value;
    printf("Enter value to delete: ");
    scanf("%d",&value);

    TerminateN(&head,value);

    printf("Updated Linked List: ");
    printList(head);

    return 0;
}