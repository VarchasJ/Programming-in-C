/*WAP TO READ A STRING INTO A TEXT FILE*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char str[1000];
    char read_buffer[1000]; 

    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar(); 


    file = fopen(filename, "w+");

    if(file == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    else {
        printf("Enter a string to write to the file: ");
        fgets(str, sizeof(str), stdin);
        fputs(str, file);
        rewind(file);

  
        if (fgets(read_buffer, sizeof(read_buffer), file) != NULL) {
             printf("Data Read from File:");
             printf("%s", read_buffer);
        } else {
             printf("Error reading from file.\n");
        }
        
        printf("String processed successfully.\n");
    }

    fclose(file);
    return 0;
}