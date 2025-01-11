#include <stdio.h>

// Function to print Fibonacci series
void fibonacci(int n) {
    int a = 0, b = 1, next;

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        if (i == 0)
            printf("%d ", a);
        else if (i == 1)
            printf("%d ", b);
        else {
            next = a + b;
            printf("%d ", next);
            a = b;
            b = next;
        }
    }
    printf("\n");
}

int main() {
    int n;
    
    // Input the number of terms to display
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    fibonacci(n);  // Call the function to display Fibonacci series

    return 0;
}
