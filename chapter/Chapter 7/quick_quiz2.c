#include <stdio.h>

int main(){
    int arr[2][2];
    printf("Enter row and colum value: ");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d %d" , &arr[i][0] , &arr[i][1]);
    }
    for (int i = 0; i < 2; i++)
    {
        // scanf("%d" , &arr[i][i]);
        printf("Values: %d Values:  %d\n" , arr[i][0] , arr[i][1]);
    }
    
    return 0;
}