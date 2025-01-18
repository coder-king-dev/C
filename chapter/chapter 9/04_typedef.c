#include <stdio.h>
#include <string.h>

typedef struct coders
{
    int code ; 
    float salary; // per month salary
    char name[15];
}emp;

int main(){
    // to create a data type any
    typedef int Rustam;
    Rustam a = 343;
    printf("Value of a: %d\n" , a);
    // but this used in struct mostly


    // typedef struct coders emp you can make it like this

    
    // best way to declare emp
    emp c1 , c2 , c3 = {134,23232323.232 , "Rustam"}; // multi way to initialize structure
    strcpy(c1.name , "Rustam");
    c1.code = 884021;
    c1.salary = 200000;
    printf("name: %s code: %d salary: %0.2f / per month\n" , c1.name , c1.code , c1.salary);
    
    return 0;
}