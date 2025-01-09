#include <stdio.h>
int main()
{
    int age = 15;

    if(1093){
        printf("Hey First if\n");
    }
    if(4234234){
        printf("Hey second if\n");
    }
    if(23.232){
        printf("Hey third if\n");
    }
    if('c'){
        printf("Hey fourth if\n");
    }
    if(0){
        // zero values not exicute in c in if-else and etc use non -zero
        printf("Hey fifth - zero if\n");
    }
    return 0;
}