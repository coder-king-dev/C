#include <stdio.h>

float forehight(float);
float forehight(float x){
    float forehight = (x * 9/5) + 32;
    return forehight;
}


int main(){
    float celcuis = 37; // take user input here
    printf("Forehight is: %f\n" , forehight(celcuis));
    return 0;
}