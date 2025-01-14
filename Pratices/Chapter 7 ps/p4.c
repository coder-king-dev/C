#include <stdio.h>

int main(){
    int arr[11];
    printf("Enter Numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d" , &arr[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("The values on index: %d are: %d\n" , i, arr[i]);
    }
    
    return 0;
}