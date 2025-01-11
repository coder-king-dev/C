#include <stdio.h>
// now we will learn recursion in C
// read recursion.txt please! for understand
int factorial(int);

int factorial(int x)
{
    int f;
    if(x == 0 || x == 1){
        return 1;
    }
    else{
        f = x * factorial(x-1);
        return f;
    }
}

int main()
{
    // calling factorial function

    int factorials = factorial(5);
    printf("Factorial is: %d\n" , factorials); //  answer will 120
    return 0;
}