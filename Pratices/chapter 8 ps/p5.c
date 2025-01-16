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

void mystrcpy(char str2[] , char str1[]){
    // str2 = str1;
    int i;
    for (i = 0; i < strlen(str1); i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    
}

int main(){
    char st[] = "Rustam";
    char str[30];
    mystrcpy(str , st);
    printf("Len is: %s\n" , str);
    // printf("Len is: %s\n" , str);
    
    return 0;
}