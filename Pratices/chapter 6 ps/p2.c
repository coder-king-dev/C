#include <stdio.h>

int test(int*);
int test(int* x){
    printf("The adress of variable : %u\n" , x);
    return *x;
}

int main(){
    int i = 5;
    printf("The adress of variable : %u\n" , &i);
    test(&i);
    return 0;
}