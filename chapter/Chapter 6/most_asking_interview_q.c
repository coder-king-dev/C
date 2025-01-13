#include <stdio.h>

void swap(int* , int*);
void swap(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;


}

int main(){
    // a = 3 b = 4 convert a to 4 and b to 3 wthout adding and substraction
    int a = 3 , b = 4;
    swap(&a,&b);
    printf("Value of a: %d and b: %d" , a , b); // output is 4,3
    return 0;
}