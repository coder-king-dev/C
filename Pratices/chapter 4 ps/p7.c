#include <stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("Enter Number: ");
    scanf("%d" , &n);

    for (int i = 1; i<=10 ; i++)
    {
        int cal = i*n;
        printf("%d\n" , cal);
        sum += cal;
    }
    printf("Value of sum: %d\n" , sum);
    return 0;
}