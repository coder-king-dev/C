#include <stdio.h>

int main(){
    printf("Hello World\n");
    FILE *ptr;
    ptr = fopen("first.txt" , "a");
    int num = 343423;
    fprintf(ptr , "%d \n" , num); // for append file
    printf("Values are: %d" , num);

    // add values after a value and does not clear old data
    fclose(ptr); //  for close file
    return 0;
}