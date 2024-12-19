// program for find area of rectangle
// f = l*b
#include <stdio.h>

int main() {
    //taking lenght input
    int lenght;
    printf("Enter Lenght of Rectangle: ");
    scanf("%d" , &lenght);

    //taking breath input;
    int breath;
    printf("Enter Breath of Rectangle: ");
    scanf("%d",&breath);

    // Calculation:
    float area = lenght*breath;
    printf("The Area Of Rectangle: %f \n" , area);
    printf("Thank You");
    return 0;
}