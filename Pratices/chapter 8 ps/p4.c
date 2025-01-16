#include <stdio.h>

char* slice(char str[] , int m , int n){
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';
    return str;
}

int main(){
    char st[] = "Rustam";
    
    printf("Len is: %s\n" , slice(st , 0 , 4));
    
    return 0;
}