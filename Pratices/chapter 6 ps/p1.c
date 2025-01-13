#include <stdio.h>

int main(){
    int value_1 = 5;
    int* ad_v_1 = &value_1;
    printf("The adress of value_1: %u\n" , ad_v_1);
    printf("The value of the adress ad_v_1: %d\n" , *ad_v_1);

    return 0;
}