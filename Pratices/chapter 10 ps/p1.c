#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("p1f.txt" , "r");

    int num , num2 , num3;

    fscanf(ptr , "%d %d %d" , &num  , &num2 , &num3);

    printf("%d" , num);
    printf("%d" , num2);
    printf("%d" , num3);
    
    return 0;
}