#include <stdio.h>

int main(){
    int i = 9;
    int* j = &i;
    int** k = &j; // pointer of pointer
    printf("The Value of i is: %d\n" , **(k)); // output: 9;
    return 0;
}