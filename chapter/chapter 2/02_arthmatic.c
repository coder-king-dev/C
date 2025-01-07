#include <stdio.h>
#include <math.h>

int main()
{
    int a = 10, b =5;
    int z = a*b;
    int i = a%b;
    float k = 2+2.3;
    int p = -5%2;
    printf("%d\n", z);
    printf("%d\n", p);
    printf("%d", i);
    printf("%d\n");
    printf("%f\n",k);
    // printf("%d\n" , anyopr**anyopr)not work use <math.h>
    return 0;
}