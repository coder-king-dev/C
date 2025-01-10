#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        printf("Counting: %d\n", i);

        if (i == 5)
        {
            break; // Exit the loop now!
        }
    }

    printf("Loop Close\n");

    for (int r = 1; r <= 100; r++)
    {
        printf("Value of r: %d\n", r);

        if (r <= 5)
        {
            continue; // leave these digit print all or skip this itrations now!
        }
    }

    printf("Loop Close");

    return 0;
}