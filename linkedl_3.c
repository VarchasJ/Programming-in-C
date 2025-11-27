/*Wap to insert node at any point*/
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node*next;
}node;

void insertATPos(node**head, int value, int position){
    node*newNode=(node*)malloc(sizeof(node));
    newNode->data=value;
    newNode->next=NULL;

    if(position==0){
        newNode->next=*head;
        *head=newNode;
        return;
    }
    node*temp=*head;
    for(int i=0;i<position-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        printf("Position out of bounds\n");
        free(newNode);
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;
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

    insertATPos(&head,10,0);
    insertATPos(&head,20,1);
    insertATPos(&head,15,1);
    insertATPos(&head,5,0);
    insertATPos(&head,25,10); // Position out of bounds

    printf("Linked List: ");
    printList(head);

    return 0;
}
