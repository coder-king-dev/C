#include <stdio.h>

// fun1
void goodMorning();

void goodMorning(){
    printf("Good Morning \n");
}

// func 2
void goodEvening();

void goodEvening(){
    printf("Good Evening \n");
}

// func 3
void goodNight();

void goodNight(){
    printf("Goo Night \n");
}

// main func
int main(){
    // func calling
    goodMorning();
    goodEvening();
    goodNight();
    return 0;
}