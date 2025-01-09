#include <stdio.h>
int main()
{
    int age;
    printf("Enter a Number: ");
    scanf("%d", &age);

    if(age>10){
        printf("Hey First if\n");
    }else if(age==5){
        printf("Hey elif");
    }else{
        printf("Hey this is else\n");
    }
    return 0;
}