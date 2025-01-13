#include <stdio.h>

int main()
{ // pointer to pointer
    int i = 72;
    // see value of pointer of i
    printf("The adreass of i: %p\n", &i); // this will show in deigt and str both but %u for in int
    printf("The adress of i: %u\n", &i);  // show in int

    // creating pointer

    int *j = &i;                        // j is pointing i mean j is storing adress of j
    printf("Value of j : %d\n", **(&j)); // * will use that time wwhich time & exits
    printf("Adress of j is: %p\n", &j); // show adress of j

    int **k = &j; // pointing j
    int ***l = &k; // pointing k (* used that time that which time is this value
    // but we use * , ** in real world program
    return 0;
}