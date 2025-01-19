#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // rock paper sessors game
    srand(time(NULL)); // Automatically seed using the current time

    // Array containing the characters to choose from
    char chars[] = {'r', 'p', 's'};
    
    // Generate a random index from 0 to 5 (size of chars array - 1)
    char randomChar = chars[rand() % 3];

    // printf("Random character: %c\n", randomChar);
    char user_input;
    printf("Welcome to rock paper sessors game\n");
    printf("Enter your choose: [r/p/s]: ");
    scanf("%c" , &user_input);

    if (user_input == randomChar)
    {
        printf("Draw \n");
    }
    else{
        if (user_input == 'r' && randomChar == 'p')
        {
            printf("Bot Win \n");
        }
        else if (user_input == 'r' && randomChar == 's')
        {
            printf("You Win \n");
        }
        else if (user_input == 's' && randomChar == 'r')
        {
            printf("Bot Win \n");
        }
        else if (user_input == 'p' && randomChar == 'r')
        {
            printf("You Win \n");
        }
        
    }
    printf("You choose: %c and Bot Choose: %c" , user_input , randomChar);
    

    return 0;
}
