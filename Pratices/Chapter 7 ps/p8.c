#include <stdio.h>

int main() {
    int arr[3][10];
    int mul[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d" , &mul[i]);
    }
    

    // Populate the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) { // Fixed loop variable
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    // Display the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) { // Fixed loop variable
            printf("The Value of arr[%d][%d]: %d\n ", i, j, arr[i][j]);
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}
