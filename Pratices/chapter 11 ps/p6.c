#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int *ptr;

    ptr = (int*)calloc(n, sizeof(int)); // it is capable to store 5

    // doing for 10 int

    ptr = (int*) realloc(ptr , 10 * sizeof(int)); // limited
    // increases to 10


    
    return 0;
}