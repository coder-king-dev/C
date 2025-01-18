#include <stdio.h>
#include <string.h>

struct coders
{
    int code ; 
    float salary; // per month salary
    char name[15];
};

// pointer to struct ............
int main(){
    struct coders e1;
    struct coders *ptr;
    e1.code = 234;
    ptr = &e1;
    // use * in () always
    printf("%d\n" , (*ptr).code);
    // second way to wrote this;
    printf("%d" , ptr->code); // same output
    return 0;
}