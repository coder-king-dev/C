#include <stdio.h>

int main(){
    // find factorial
    int n;
    int factorial = 1;
    int i = 1;
    printf("Enter Number: ");
    scanf("%d" , &n);

    while (i<=n)
    {
        factorial *= i;
        i++;
    }
    printf("Value of factorial: %d\n" , factorial);
    return 0;
}