#include <stdio.h>

// Function to count the number of positive integers in an array
int countPositive(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++; // Increment count for each positive number
        }
    }

    return count;
}

int main() {
    int arr[] = {-1, 2, -3, 4, 5, 0, -6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Call the function to count positive integers
    int positiveCount = countPositive(arr, size);

    printf("\nNumber of positive integers: %d\n", positiveCount);

    return 0;
}
