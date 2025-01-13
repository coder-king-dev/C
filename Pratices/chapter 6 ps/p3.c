#include <stdio.h>

int change(int*);
int change(int* x){
    *x = *x * (10);
    printf("The value of x: %d" , *x);
}

int main(){
    int i = 7;
    change(&i); // output: 70;
    return 0;
}