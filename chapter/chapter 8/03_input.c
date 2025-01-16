#include <stdio.h>

int main(){
    char str[50]; // giving limit of astring
    printf("Enter Your name: ");
    scanf("%s" , str);  // same as &str bcz str is adress of str[0]
    printf("hello, %s sir" , str);
    return 0;
    // but can't enter a space or new line
}