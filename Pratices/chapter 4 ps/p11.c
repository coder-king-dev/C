#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d" , &n);
    int cal;
    int i = 2;
    while (i < n)
    {
        cal =n%i;
        if (cal == 0)
        {
            /* code */
            break;
        }
        i++;
    }

    if (cal == 0)
    {
        printf("Even\n");
    }
    else{
        printf("prime\n");
    }

    return 0;
}