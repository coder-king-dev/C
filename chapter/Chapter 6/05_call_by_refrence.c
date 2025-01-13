#include <stdio.h>
// call by refrence
// sum should change the value of x
int sum(int*);
int sum(int* a){
    *a = *a+10;
}

int main(){
    int x = 10;
    sum(&x); // give adress of x here for a while and can change value of x
    printf("The value of x: %d\n" ,x ); // x is 20
    return 0;
}