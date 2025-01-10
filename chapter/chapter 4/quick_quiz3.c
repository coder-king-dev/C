#include <stdio.h>

int main(){
    int n;
    // int i = 0;
    printf("Enter a number: ");
    scanf("%d" , &n);
    for(int i =0;i<n;i++){
        printf("Natural number: %d\n" , i+1);
    }
    return 0;
}