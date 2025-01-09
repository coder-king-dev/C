#include <stdio.h>


int main(){
    char letter;
    printf("Enter Caracter: ");
    scanf("%c" , &letter);

    if (letter>=65 && letter<=90)
    {
        printf("Letter is Capital!");
    }

    else if (letter>=97 && letter<=122)
    {
        printf("Letter is Not capital!");
    }

    else{
        printf("Invaled Thing!");
    }
    
    return 0;
}