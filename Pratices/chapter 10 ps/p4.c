#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("p4f.txt", "a"); // "a" mode: It will retain the old content and append the new content.

    char name[40];
    int salary;

    int choice = 1; // Variable to control the loop.

    while (choice == 1) { // Continue as long as the user wants to input data.
        printf("Enter name and salary: ");
        scanf("%s %d", name, &salary);

        fprintf(ptr, "Name: %s, Salary: %d\n", name, salary);

        printf("Do you want to add another entry? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);
    }

    fclose(ptr); // It is necessary to close the file.
    printf("Data successfully written to the file.\n");

    return 0;
}
