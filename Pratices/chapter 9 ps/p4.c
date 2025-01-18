#include <stdio.h>

typedef struct emp
{
    int salary;
    float score;
} employee;

int main(){
    employee e1;
    employee *ptr;
    ptr = &e1;
    ptr -> salary = 4444;
    printf("%d" , ptr -> salary);

    return 0;
}