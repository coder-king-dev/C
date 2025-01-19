#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    float *ptr;

    ptr = (float*)malloc(n* sizeof (float));

    ptr[0] = 334.34;
    ptr[1] = 367.34;
    ptr[2] = 244.34;
    ptr[3] = 333.34;
    ptr[4] = 374.34;

    for (int i = 0; i < n; i++)
    {
       printf("%f\n" , ptr[i]);
    }
    



    return 0;
}