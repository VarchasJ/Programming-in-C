/*WAP to create a custom data type using structures allowing grouping of variables to represent a real world entity such as book and student.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

typedef struct BOOK {
    char title; 
    int price;
    int pages;
    char author;
}book;


typedef struct Students{
    char name;
    int roll_num;
    int class;
}student;

int main() {

    book *book1;
    book1=(book*)malloc(sizeof(book));

    student*stduent;
    stduent=(student*)malloc(sizeof(student));
    printf("Enter book title, price, pages and author: ");
    scanf(" %c %d %d %c", &book1->title, &book1->price, &book1->pages, &book1->author);
    getchar();
    printf("Book Title: %c | Price: %d | Pages: %d | Author: %c\n", book1->title, book1->price, book1->pages, book1->author);
    printf("Enter student name, roll number and class: ");
    scanf(" %c %d %d", &stduent->name, &stduent->roll_num, &stduent->class);
    getchar();
    printf("Student Name: %c | Roll Number: %d | Class: %d\n", stduent->name, stduent->roll_num, stduent->class);
    free(book1);
    free(stduent);


    return 0;
}

