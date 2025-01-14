#include <stdio.h>

int main(){
    int marks[5]; // declaior array
    // taking input

    printf("Enter 5 students value: ");
    // scanf("%d %d" , &marks[0] ,&marks[1] ); // taking multiple input;

    // second way to input

    for (int i = 0; i < 5; i++)
    {
        scanf("%d" , &marks[i]); // inputing numbers using loop
    }
    
    
    printf("Value of 0: %d and 1: %d\n" , marks[0] , marks[1]);
    return 0;
}