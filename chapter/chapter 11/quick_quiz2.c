#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *ptr;
    scanf("%d" , &n);
    // int arr[n];  // if you have c99 ir other comiler this will work and if not
    // then

    ptr = (int*)calloc(n, sizeof (int)); // use this
    // this will work in every like this ptr[n]

    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("value: %d\n" , ptr[i]);
    }
    
    
    return 0;
}