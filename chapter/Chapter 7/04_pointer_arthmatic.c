#include <stdio.h>

int main(){
    // arthmatic in pointer;
    int a = 9;
    int* ptr = &a;
    printf("The adress of a is : %u\n" , &a);
    printf("The adress of a is : %u\n" , ptr);
    // increment of pointer in int;
    ptr++; // it will increment by 4 bcz int take 4 bytes and this add 4 bytes
    printf("The Value of ptr is : %u\n" , ptr);
    printf("\n");
    // increment in pointer in c in Char
    char g = 'G';
    char* j = &g;
    printf("The adress of g is: %u\n" , j);
    j++; // it will add 1 bcz char take 1 bytes in c at my arctecture
    printf("The Value of j is: %u\n" , j);
    printf("\n");
    // increment in pointer in C in float
    float h = 32.32;
    float *l = &h;
    printf("The adress of h is: %u\n" , l);
    l++; // add 4 bcz float takes 4 bytes in c
    printf("The adress of l is: %u\n" , l);


    return 0;
}