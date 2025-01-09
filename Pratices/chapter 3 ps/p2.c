#include <stdio.h>

int main(){
    int pers1;
    printf("Enter your percentage without point1: ");
    scanf("%d" , &pers1);
    int pers2;
    printf("Enter your percentage without point2: ");
    scanf("%d" , &pers2);
    int pers3;
    printf("Enter your percentage without point3: ");
    scanf("%d" , &pers3);

    if(pers1>40 && pers2>40 && pers3>40){
        printf("You are Pass!\n");
    }
    else{
        printf("You are Failed!\n");
        printf("Try again!\n");
    }
    
    return 0;
}