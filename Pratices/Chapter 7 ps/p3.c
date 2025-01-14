#include <stdio.h>

int main(){
    int arr[11];
    int a = 5;
    for (int i = 0; i < 11; i++)
    {
        arr[i] = a;
        a = a+5;
    }
    
    for (int i = 0; i < 11; i++)
    {
        printf("The values are: %d\n" , arr[i]);
    }
    
    return 0;
}