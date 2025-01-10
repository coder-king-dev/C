#include <stdio.h>

int main(){
    int n;
    int i = 0;
    printf("Enter Number: ");
    scanf("%d" , &n);
    do
    {
        printf("Natural Numbers: %d\n" , i+1);
        i++;
    } while (i<n);
    
    return 0;
}