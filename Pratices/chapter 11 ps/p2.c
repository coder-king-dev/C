#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 6;
    int *ptr;

    ptr = (int*)malloc(n* sizeof(int));
    
    for (int i = 0; i < 5; i++)
    {
        /* code */
        scanf("%d" , &ptr[i]);
    }
    

    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("value: %d\n" , ptr[i]);
    }
    
    return 0;
}