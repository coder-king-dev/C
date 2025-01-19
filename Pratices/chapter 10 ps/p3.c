#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("p3f.txt" , "r");

    FILE *ptr2;
    ptr2 = fopen("p3fw.txt" , "w");
    char ch;

    while (1)
    {
        ch = fgetc(ptr);
        fprintf(ptr2 , "%c" , ch);
        fprintf(ptr2 , "%c" , ch);

        if (ch == EOF)
        {
            break;
        }
        
    }
    
    
    return 0;
}