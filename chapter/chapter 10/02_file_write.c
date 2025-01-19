#include <stdio.h>

int main(){
    printf("Hello World\n");
    FILE *ptr;
    ptr = fopen("first.txt" , "w");
    int num = 343423;
    fprintf(ptr , "%d" , num); // for write file
    printf("Values are: %d" , num);

    fclose(ptr); //  for close file
    return 0;
}