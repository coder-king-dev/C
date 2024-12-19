//. Calculate the area of a circle
// f= 3.4*(r*r)

#include <stdio.h>

int main() {
    //Taking Redius Input
    float redius;
    printf("Enter Redius Of circle: ");
    scanf("%f" , &redius);

    //calculation:
    float area = 3.14*(redius*redius);
    printf("The Area Of Circle: %f",area);
    return 0;
}