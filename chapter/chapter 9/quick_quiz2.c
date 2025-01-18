#include <stdio.h>
#include <string.h>

struct coders
{
    int code ; 
    float salary; // per month salary
    char name[15];
};

void show(struct coders e){
    e.code = 2429424;
    e.salary = 223232323;
    strcpy(e.name , "Rustam");
    printf("name: %s , Code: %d , Salary: %0.2f / per month\n" , e.name , e.code , e.salary);
}

int main(){
    struct coders coder1 = {101, 5000.50, "Rustam"}; // Initialize a coder
    show(coder1); // Call the function and pass the structure
    return 0;
}