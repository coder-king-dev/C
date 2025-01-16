#include <stdio.h>

int main(){
    char str[] = {'a' , 'b' , 'c' , '\0'};
    // char str[] = "abc"; // same as upper
    // this is a array of charactor but can use as string
    // when we add '\0' in the end
    printf("%s\n" , str); // output will 'abc'
    printf("Hello");
    return 0;
}