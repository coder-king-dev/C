#include <stdio.h>

int main()
{
    // Variables Declaration
    int number = 8;
    float point = 9.9;
    char charater = 'R'; // always in single qutoes

    // others

    int a = 8;
    float b = 9.8;
    int i = a;
    printf("The Value of a is %d and i is %d \n", a, i);

    // more
    int z = 3, l = 7, k = 9;
    int kk = z + l - 1;
    int o, p, q, t;
    o = p = q = t = 30;
    printf("Value of o is %d p is %d q is %d t is %d \n", o, p, q, t);

    float v = a+3;
    printf("Value of v is %f\n",v);

    // not allowed
    //  Invalid: 'a' is used before declaration bina declare can not use 
    // float b = a + 3;
    // float a = 1.1; // if a already declare then errorr
    return 0;
}