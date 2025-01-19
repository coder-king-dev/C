#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("testing.txt" , "r");
    int num;
    fscanf(ptr , "%d" , &num);
    printf("Values are: %d" , num); // output will garbage value
    fclose(ptr);
    return 0;
}