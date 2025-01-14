#include <stdio.h>

int main(){
    // arrays in memory
    int marks[2]; // declaior array
    marks[0] = 56;// declRING value
    marks[1] = 99;// declaring value
    printf("Value of 0: %d and 1: %d\n" , marks[0] , marks[1]);
    // printing adress of marks
    printf("adress of 0: %u and 1: %u\n" , &marks[0] , &marks[1]);
    
    return 0;
}