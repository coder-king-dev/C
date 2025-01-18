#include <stdio.h>

struct complex
{
    int i;
    int j;
};


int main(){
    struct complex v = {1,2};
    printf("complex: %d i %d j" , v.i , v.j);
    return 0;
}