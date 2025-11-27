/*Wap to showcase the use of nested structures*/
#include <stdio.h>
#include <string.h>

struct School {
    char section; 
};

struct Student {
    char name_student[50];
    int roll_num;
    struct School class; 
};

int main() {
    struct Student student1;

    strcpy(student1.name_student, "ABC");
    student1.roll_num = 123;

  
    student1.class.section = 'B'; 

    printf("Name: %s\n", student1.name_student);
    printf("RollNumber: %d\n", student1.roll_num);
    printf("Name of section: %c\n", student1.class.section);

    return 0;
}