/*Wap to create linked list*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node*next;
}node;


int main(){


node*head=NULL;

head=(node*)malloc(sizeof(node));
head->data=5;
head->next=NULL;

printf("Head Node data=%d\n",head->data);
printf("Head Node address=%p\n",head);



    return 0;
}