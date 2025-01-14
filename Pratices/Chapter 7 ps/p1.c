#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int* ptr = arr;
    printf("Jumped index : %d to index: %d" , *ptr , *(ptr+2));
    return 0;
}