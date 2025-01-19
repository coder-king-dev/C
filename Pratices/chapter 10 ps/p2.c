#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("p2f.txt" , "r");

    int num;

    fscanf(ptr , "%d" , &num);

    int i  = 1;
    while (i<=10)
    {
        printf("number %d X %d: %d\n" , num , i ,num*i);
        i++;
    }
    
    
    return 0;
}