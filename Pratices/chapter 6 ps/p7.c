#include <stdio.h>

int change(int);
int change(int x){
    x = x+5;
}

int main(){
    int i = 8;
    change(i); // it will not change
    printf("The value of i: %d\n" , i); // output: 8;
    return 0;
}