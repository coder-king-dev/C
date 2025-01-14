#include <stdio.h>

int main(){
    int marks[] = {1,2,3,4};

    int *ptr = marks; // same as int* ptr = &marks[0]

    for (int i = 0; i < 4; i++)
    {
        // printf("The value is: %d\n",marks[i]);
        // and print with pointers
        printf("The valur of marks is: %d\n" , *ptr);
        ptr++; // increase one index of array in this arctecture
        
    }

    return 0;
}