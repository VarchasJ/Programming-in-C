/*WAP to copy a binary file from another file.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceName[100], destName[100];
    unsigned char buffer[1024];
    size_t bytesRead;

    printf("Enter source binary filename: ");
    scanf("%s", sourceName);

    sourceFile = fopen(sourceName, "rb");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        exit(1);
    }

    printf("Enter destination binary filename: ");
    scanf("%s", destName);

    destFile = fopen(destName, "wb");
    if (destFile == NULL) {
        printf("Error creating destination file.\n");
        fclose(sourceFile);
        exit(1);
    }

    while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destFile);
    }

    printf("Binary file copied successfully.\n");

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}