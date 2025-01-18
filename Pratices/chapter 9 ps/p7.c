#include <stdio.h>

typedef struct c
{
    int i;
    int j;
} complex;


int main(){
    complex v = {1,2};
    printf("complex: %d i %d j" , v.i , v.j);
    return 0;
}