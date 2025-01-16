#include <stdio.h>

int find(char str[] , char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        // str[i] = str[i] - 1;
        if (str[i] == ch)
        {
            return 1;
        }
        else{
            return 0;
        }
          
    }
    // return count;
}

int main() {
    char str[100] = "acda";

    printf("Encrypted string: %d\n", find(str , 'a')); 
    printf("1 for true \n 0 for false");

    return 0;
}
