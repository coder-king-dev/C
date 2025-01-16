#include <stdio.h>

void encryptString(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[i] + 1;
    }
}

void dencryptString(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[i] - 1;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    encryptString(str);

    printf("Encrypted string: %s\n", str);

    dencryptString(str);
    // advance
    char j;
    printf("Wanyt to see dencrypted: (y/n): ");
    scanf("%c", &j);
    if (j == 'y')
    {
        printf("de encrypted string: %s\n", str);
    }
    else
    {
        printf("No problem");
    }

    return 0;
}
