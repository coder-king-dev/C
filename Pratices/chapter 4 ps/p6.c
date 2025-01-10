#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;
    // for loop
    
    // for (i = 1; i <= 10; i++)
    // {
    //     sum += i;
    // }
    // printf("Value of sum: %d\n" , sum);

    //do-while loop
    do
    {
        sum += i;
        i++;
    } while (i<=10);
    printf("Value of sum: %d\n" , sum);
    
    
    return 0;
}