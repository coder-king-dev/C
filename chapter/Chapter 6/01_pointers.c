#include <stdio.h>

int main()
{
    // pointers
    int i = 72;
    // see value of pointer of i
    printf("The adreass of i: %p\n", &i); // this will show in deigt and str both but %u for in int
    printf("The adress of i: %u\n", &i);  // show in int

    // creating pointer

    int *j = &i;                        // j is pointing i mean j is storing adress of j
    printf("Value of j : %d\n", j);     // show same as adress of i
    printf("Adress of j is: %p\n", &j); // show adress of j

    // we use %p mostly and recommanded

    // now see how to decode mean - adress given and that adress which value exits

    printf("The Value of adress of j : %d\n", *j);    // we use * oprator for this work
    printf("The Value of adress of i : %d\n", *(&i)); // if variable is number mean int or other

    // Testing

    char k = 'C';
    char *u = &k;
    printf("The Value of u : %p", u);

   return 0;
}
