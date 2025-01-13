#include <stdio.h>

int sum_and_avarage(int* , int*);
int sum_and_avarage(int* x , int* y){
    printf("The sum of number: %d\n" , *x + *y);
    printf("The avarage of number: %0.2f\n" , (*x + *y)/2.0);

}

int main(){
    int a = 2 , b = 4;
    sum_and_avarage(&a , &b);
    return 0;
}