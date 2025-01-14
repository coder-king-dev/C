#include <stdio.h>

int main(){
    int a = 9;
    int* prt = &a;
    printf("The value of ptr: %u\n",prt);
    printf("\n");
    // additional 
    prt = prt + 1; // add 4 bytes
    printf("The value of ptr: %u\n",prt);
    printf("\n");

    // substration
    prt = prt-1; // substract 4 bytes
    printf("The value of prt: %u\n", prt);
    printf("\n");

    // substract one pointer to another
    int l = 15;
    int* ptr2 = &l;
    printf("The Value of ptr2: %u\n", ptr2);
    int difference = prt - ptr2; // Difference in terms of elements
    printf("The difference between prt and ptr2: %u\n", difference);

    printf("\n");
    // comparation of 2 pointer oprator
    if (ptr2<prt)
    {
        printf("Nice");
    }
    else
    {
        printf("Nice - 2");
    }
    // DONE
    return 0;
}