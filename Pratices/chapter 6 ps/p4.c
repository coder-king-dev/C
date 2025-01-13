#include <stdio.h>

int refrence(int* , int*);
int refrence(int* x , int* y){
    return *x + *y;
}

int main(){
    int a = 2 , b = 4;
    printf("The value is: %d\n" , refrence(&a , &b));
    return 0;
}