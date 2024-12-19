//. Calculate the volume of clynder
// f= high*3.4*(redius)2

#include <stdio.h>

int main() {
    //Taking Redius Input
    float redius;
    printf("Enter Redius Of Clynder: ");
    scanf("%f" , &redius);

    //Taking Hight Input:
    float hight;
    printf("Enter Hight of Clynder:  ");
    scanf("%f",&hight);
    //calculation:
    float area = 3.14*(redius*redius)*hight;

    printf("The Area Of Circle: %f", area);
    return 0;
}