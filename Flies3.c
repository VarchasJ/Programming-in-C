/*WAP to copy the contents of one file to another file.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceName[100], destName[100];
    char ch;

 
    printf("Enter source filename: ");
    scanf("%s", sourceName);

    sourceFile = fopen(sourceName, "r");

    if (sourceFile == NULL) {
        printf("Error: Cannot open source file '%s'. check if it exists.\n", sourceName);
        exit(1);
    }

  
    printf("Enter destination filename: ");
    scanf("%s", destName);

    destFile = fopen(destName, "w");

    if (destFile == NULL) {
        printf("Error: Cannot create destination file.\n");
        fclose(sourceFile); 
        exit(1);
    }

   
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");


    fclose(sourceFile);
    fclose(destFile);

    return 0;
}