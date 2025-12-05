/*WAP to display the Linked List */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node*next;
}node;

void createList(node**head, int n){
    for(int i=1;i<=n;i++){
        node*newNode=(node*)malloc(sizeof(node));
        printf("Enter data for node %d: ",i);
        scanf("%d",&newNode->data);
        newNode->next=NULL;
        if(*head==NULL){
            *head=newNode;
        }else{
            node*temp=*head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }
}

void displayList(node*head){
    node*temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main(){
    node*head=NULL;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    createList(&head,n);
    printf("The linked list is: \n");
    displayList(head);
    return 0;
}