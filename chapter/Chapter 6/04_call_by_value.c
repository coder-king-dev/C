#include <stdio.h>
// Call By Value

int sum(int , int);
int sum(int a , int b){
    return a+b;
}

int main(){
    // calling by value;
    printf("The value of 1+2: %d\n" , sum(1,2));
    return 0;
}