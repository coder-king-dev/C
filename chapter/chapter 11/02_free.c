#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *ptr;
    scanf("%d" , &n);
    // int arr[n];  // if you have c99 ir other comiler this will work and if not
    // then

    ptr = (int*)malloc(n* sizeof (int)); // use this
    // this will work in every like this ptr[n]

    for (int i = 0; i < n; i++)
    {
        ptr[i] = 5;
    }

    for (int i = 0; i < n; i++)
    {
        printf("value: %d\n" , ptr[i]);
    }
    
    free(ptr); // for clear ram mean stop program
    return 0;
}