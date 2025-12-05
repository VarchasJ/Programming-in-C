/* WAP to compute the length of a Linked list.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node*next;
}node;


void displayList(node*head){
    node*temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int lengthOfList(node* head) {
    int length = 0;
    node* current = head;
    while (current != NULL) {
        length++;
        current = current->next;
    }
    return length;
}


int main(){
    node*head=NULL;
    head=(node*)malloc(sizeof(node));
    head->data=10;
    head->next=(node*)malloc(sizeof(node));
    head->next->data=20;
    head->next->next=(node*)malloc(sizeof(node));
    head->next->next->data=30;
    head->next->next->next=NULL;
    displayList(head);
    int len = lengthOfList(head);
    printf("Length of the linked list: %d\n", len);
    return 0;
}