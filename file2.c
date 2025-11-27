#include <stdio.h>
#include <stdlib.h>
int main(){
FILE*fp;

fp=fopen("output.txt","a");

if(fp == NULL){
    printf("Error opening file\n");
    exit(1);
}
fprintf(fp,"Appending this line to the file.\n");
fprintf(fp,"Another line added to the file.\n");
fclose(fp);
return 0;
}