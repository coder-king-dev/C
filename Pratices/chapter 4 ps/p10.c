#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d" , &n);
    int cal;
    for (int i = 2; i < n; i++)
    {
        cal =n%i;
        if (cal == 0)
        {
            /* code */
            break;
        }
        
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