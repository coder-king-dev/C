#include <stdio.h>
#include <string.h> // string header file
int main()
{
    char st[] = "Rustam";
    // let print lenth of string using strlen func
    printf("%d\n", strlen(st)); // output is 6


    // if we have 2 string and we want to declare then same then
    char copy[30];
    strcpy(copy, st);            // use this function
    printf("%s %s\n", copy, st); // output: Rustam Rustam

    // want to add two string
    char a1[] = "Rustam";
    char a2[] = " little Coder";
    strcat(a1 , a2); //a2 will join with a1
    printf("%s ,  %s\n" , a1 , a2); // output : Rustam little Coder ,   little Coder

    // want to check which word come to dictonary first
                    // "which word come later" , "which word comes first"
    int a = strcmp("far" , "joke");
    printf("%d\n" , a); // -1 bcz far comes first in disctonary

    // but
    int b = strcmp("far" , "ajoke"); // ajoke comes first in disctonary
    printf("%d\n" , b); // output: 1
    // note these compair by ascii value not dictonary value
    return 0;

}