#include <stdio.h>

int main(){
    int a;
    printf("Enter Number: ");
    scanf("%d",&a);
    int d = a%97;
    
    printf("Number remender is: %d", d);
    return 0;
}