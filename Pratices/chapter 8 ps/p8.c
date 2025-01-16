#include <stdio.h>

int count(char str[] , char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        // str[i] = str[i] - 1;
        if (str[i] == ch)
        {
            count +=1;
        }
          
    }
    return count;
}

int main() {
    char str[100] = "abba";

    printf("Encrypted string: %d\n", count(str , 'b')); 

    return 0;
}
