#include <stdio.h>
#include <string.h>

struct coders
{
    int code ; 
    float salary; // per month salary
    char name[15];
};

int main(){
    struct coders facebook[5];
    facebook[0].code = 343;
    facebook[0].salary = 2323434; // we use only one thing in array 
    char name[] = "Rustam";
    strcpy(facebook[0].name , "Rustam");

    facebook[1].code = 348;
    facebook[2].code = 345;
    // you will find garbage value in place of salary and name
    printf("%d , %d , %d" , facebook[0].code , facebook[0].salary , facebook[0].name);
    return 0;
}