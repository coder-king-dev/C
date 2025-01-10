#include <stdio.h>

int main(){
    int n = 4;
    for(int i = 0; i<n ; i++){
        printf("The Values of i: %d\n" , i);
    }
    printf("\n");
    int j = 0;

    while (j<n)
    {
        printf("The Value of j: %d\n" , j);
        j++;
    }
    
    return 0;
}