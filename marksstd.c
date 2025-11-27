/*Wap to find marks recieved by a student using if else and switch case*/
#include <stdio.h>
int main(){
int marks;
printf("Enter the marks obtained:");
scanf("%d", &marks);
if(marks>=90 && marks<=100){
    printf("A+");
} else if(marks>=80 && marks<90){
    printf("A");
} else if(marks>=70 && marks<80){
    printf("B+");
} else if(marks>=60 && marks<70){
    printf("B");
} else if(marks>=50 && marks<60){
    printf("C+");
} else if(marks>=40 && marks<50){
    printf("C");
} else if(marks>=33 && marks<40){
    printf("D");
} else if(marks>=0 && marks<33){
    printf("Fail");
} else{
    printf("Invalid input");
}
switch(marks/10){
    case 10:
    case 9:
        printf("\nA+");
        break;
    case 8:
        printf("\nA");
        break;
    case 7:
        printf("\nB+");
        break;
    case 6:
        printf("\nB");
        break;
    case 5:
        printf("\nC+");
        break;
    case 4:
        printf("\nC");
        break;
    case 3:
        printf("\nD");
        break;
    case 2:
    case 1:
    case 0:
        if(marks>=0 && marks<33){
            printf("\nFail");
            break;
        }
    default:
        printf("\nInvalid input");
}
return 0;
}