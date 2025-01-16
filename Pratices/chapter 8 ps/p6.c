#include <stdio.h>

void encryptString(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = str[i] + 1;  
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  

    encryptString(str);  

    printf("Encrypted string: %s\n", str); 

    return 0;
}
