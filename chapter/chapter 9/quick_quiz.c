#include <stdio.h>
#include <string.h>

// Define the structure outside the main function
struct coders {
    int code;
    float salary; // per month salary
    char name[40];
};

int main() {
    struct coders c1, c2 , c3;
    
    // Input for coder 1
    printf("Enter Name for Coder 1: ");
    scanf("%s", c1.name); // Read string
    printf("Enter Code for Coder 1: ");
    scanf("%d", &c1.code); // Read integer
    printf("Enter Salary for Coder 1: ");
    scanf("%f", &c1.salary); // Read float
    printf("Name: %s, Code: %d, Salary: %.2f per month\n", c1.name, c1.code, c1.salary);

    // Input for coder 2
    printf("Enter Name for Coder 2: ");
    scanf("%s", c2.name); // Read string
    printf("Enter Code for Coder 2: ");
    scanf("%d", &c2.code); // Read integer
    printf("Enter Salary for Coder 2: ");
    scanf("%f", &c2.salary); // Read float
    printf("Name: %s, Code: %d, Salary: %.2f per month\n", c2.name, c2.code, c2.salary);

    printf("Enter Name for Coder 3: ");
    scanf("%s", c3.name); // Read string
    printf("Enter Code for Coder 3: ");
    scanf("%d", &c3.code); // Read integer
    printf("Enter Salary for Coder 3: ");
    scanf("%f", &c3.salary); // Read float
    printf("Name: %s, Code: %d, Salary: %.2f per month\n", c3.name, c3.code, c3.salary);

    return 0;
}
