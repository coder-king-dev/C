//forehight to celcius converter
#include <stdio.h>

int main() {
    //Taking Forehight Input
    float fo;
    printf("Enter Forehight: ");
    scanf("%f" , &fo);

    //calculation;
    float celcu = 0.5555555555555556*(fo-32);
    printf("Celcius of %f is: %f" , fo , celcu);

    return 0;
}