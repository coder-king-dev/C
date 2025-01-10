#include <stdio.h>

int main(){
    // find factorial
    int n;
    int factorial = 1;
    printf("Enter Number: ");
    scanf("%d" , &n);

    for (int i = 1; i<=n ; i++)
    {
        factorial *= i;
    }
    printf("Value of factorial: %d\n" , factorial);
    return 0;
}