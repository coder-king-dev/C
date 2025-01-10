#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //number guassing game
    srand(time(0));
    int computer = rand() % 101;
    int user;
    int total_guess = 0;
    do
    {
        printf("guess number: ");
        scanf("%d" , &user);
        if (user>computer)
        {
            printf("Enter lower number!\n");
        }
        else
        {
            printf("Enter greater number!\n");
        }

        total_guess++;
    } while (user!=computer);
    printf("You won in terms: %d , computer chose: %d , and You choose: %d" ,total_guess, computer , user);

    return 0;
}
