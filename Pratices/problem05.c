//Simple Intrest Finder

#include <stdio.h>

int main() {
    //Taking Principle Input
    float Principle;
    printf("Enter Principle Values: ");
    scanf("%f",&Principle);

    //Taking rate Input
    float Rate;
    printf("Enter Rate: ");
    scanf("%f",&Rate);

    //Taking Time Input
    int time;
    printf("Enter Months: ");
    scanf("%d",&time);

    //calculation:

    float SI = (Principle*Rate*(time/12))/100;
    printf("Simple Intrest is: %f",SI);
    return 0;
}