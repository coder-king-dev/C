#include <stdio.h>

int main(){
    // other way to initialize array
    int cgpa[3] = {9,9,9};
    // printing these using for loop
    for (int i = 0; i < 3; i++)
    {
        printf("The value of index: %d is %d\n" , i , cgpa[i]);
    }
    // second way
    int gp[] = {98,99};// this will auto count index;
    for (int i = 0; i < 2; i++)
    {
        printf("The value of index: %d is %d\n" , i , gp[i]);
    }
    printf("\n");
    // niw priting adress of cgpa;
    for (int i = 0; i < 3; i++)
    {
        printf("The adress of index: %d is %u\n" , i , &cgpa[i]);
    }
    // printing value of adress
    for (int i = 0; i < 3; i++)
    {
        printf("The adress of index: %d is %d\n" , i , *(&cgpa[i]));
    }
    return 0;
}