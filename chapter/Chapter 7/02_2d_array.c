#include <stdio.h>

int main(){
    int arr[3][2] = {
        {4,3},
        {7,8},
        {9,10}
    };
    printf("value: %d\n" , arr[0][1]);
    printf("adress: %u\n" , &arr[0][1]);
    return 0;
}