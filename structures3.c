/*WAP to access the structure members using structure pointer and dot operator*/
#include <stdio.h>

struct node{
    int data;
    struct node *link;
};

int main(){

struct node ob1;
struct node ob2;
ob1.data=30;
ob1.link=&ob2;
ob2.data=40;
ob2.link=&ob1;

printf("Data ob1 accesses from ob2:%d\n", ob1.link->data);
printf("Data ob2 accesses from ob1:%d\n", ob2.link->data);


    return 0;
}