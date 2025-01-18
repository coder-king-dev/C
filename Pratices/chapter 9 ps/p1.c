#include <stdio.h>

struct vector
{
    int i;
    int j;
};


int main(){
    struct vector v = {1,2};
    printf("Vector: %d i %d j" , v.i , v.j);
    return 0;
}