/*WAP to read, write and display the content of the file.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char str[100];
    char ch;

    fp = fopen("data.txt", "w+");

    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    printf("Enter text to write to the file: ");
    fgets(str, sizeof(str), stdin);

    fputs(str, fp);

    rewind(fp);

    printf("\nContent read from the file:\n");
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}