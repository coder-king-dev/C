#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 6;
    int *ptr;

    ptr = (int*)calloc(n ,  sizeof(int));
    ptr[0] = 34;
    ptr[1] = 74;
    ptr[2] = 324;
    ptr[3] = 37;
    ptr[4] = 54;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("value: %d\n" , ptr[i]);
    }
    
    return 0;
}