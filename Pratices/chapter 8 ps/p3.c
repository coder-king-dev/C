#include <stdio.h>

int strlen(char str[]){
    int i = 0 , count;
    int c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}

int main(){
    char st[] = "Rustam";
    
    printf("Len is: %d\n" , strlen(st));
    
    return 0;
}