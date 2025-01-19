#include <stdio.h>

int main(){
    printf("Hello World\n");
    FILE *ptr;
    ptr = fopen("first.txt" , "r");
    int num;
    fscanf(ptr , "%d" , &num);
    printf("Values are: %d" , num); // print 12 
    // bcz 12 is first index and it print index by 
    
    fclose(ptr); //  for close file
    return 0;
}