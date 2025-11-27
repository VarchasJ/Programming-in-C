/*WAP to dynamically allocate memory using malloc*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_elements = 5;
    int *ptr = NULL;

    printf("Attempting to dynamically allocate memory for %d integers...\n", num_elements);

    ptr = (int*) malloc(num_elements * sizeof(int));

    if (ptr == NULL) {
        fprintf(stderr, "Error: Memory allocation failed! Exiting.\n");
        return 1;
    }

    printf("Memory successfully allocated at address: %p\n", (void*)ptr);
    
    printf("Initializing and printing elements:\n");
    for (int i = 0; i < num_elements; i++) {
        ptr[i] = (i + 1) * 10;
        printf("Element %d: %d\n", i, ptr[i]);
    }

    free(ptr);
    printf("\nMemory deallocated successfully.\n");
    
    ptr = NULL; 

    return 0;
}