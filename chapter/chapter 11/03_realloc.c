#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int *ptr;
    // int arr[n];  // if you have c99 ir other comiler this will work and if not
    // then

    ptr = (int*)malloc(n* sizeof (int)); // use this
    // this will work in every like this ptr[n]

    // this use for change size  as n = 5 we will change to 10 and other
    // way realloc(pointer , size you want , sizeof (variable type: any));
    ptr = (int*) realloc(ptr,10 * sizeof (int));

    return 0;
}