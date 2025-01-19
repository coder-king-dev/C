#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("second.txt", "r");

    char ch;
    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);

        if (ch == EOF)
        {
            break;
        }
    }
    /*
        output:
            C is a good language

            43432 C
    */

    return 0;
}