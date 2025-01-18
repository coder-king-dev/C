#include <stdio.h>
#include <string.h>

// we wrote structure out from main()
struct coders
{
    int code ; 
    float salary; // per month salary
    char name[15];
};


int main(){
    struct coders c1 , c2 , c3 = {134,23232323.232 , "Rustam"}; // multi way to initialize structure
    strcpy(c1.name , "Rustam");
    c1.code = 884021;
    c1.salary = 200000;
    printf("name: %s code: %d salary: %0.2f / per month\n" , c1.name , c1.code , c1.salary);

    // coder 2
    strcpy(c2.name , "Rohit");
    c2.code = 884022;
    c2.salary = 135000;
    printf("name: %s code: %d salary: %0.2f / per month\n" , c2.name , c2.code , c2.salary);
    printf("name: %s code: %d salary: %0.2f / per month\n" , c3.name , c3.code , c3.salary);
    return 0;
}