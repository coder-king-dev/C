#include <stdio.h>

int main(){
    char st[6];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c" , &st[i]);
        fflush(stdin); // remover \n in input
    }
    st[5] = '\0';
    printf("%s\n" , st);
    // with %s
    gets(st);
    printf("%s\n" , st);

    return 0;
}