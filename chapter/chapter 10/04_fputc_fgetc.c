#include <stdio.h>

int main(){
    // printf("Hello World\n");
    FILE *ptr;
    ptr = fopen("second.txt" , "w");
    int num = 343423;
    // char c = fgetc(ptr); // used to read a character from file
    // printf("%c" , c);

    fputc('c', ptr); 

    // add values after a value and does not clear old data
    fclose(ptr); //  for close file
    return 0;
}