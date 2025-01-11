#include <stdio.h>

// function prototype
int sum(int , int);

// function declaration
int sum(int x , int y){
    printf("The sum is: %d\n" , x+y);
    return x+y;
} // we can wrote functions after main or before main but func prototype will always up

int main(){
    // function calling
    // 1st way
    sum(10,10); // 20

    //second way
    int a = 10;
    int b = 90;
    sum(a,b); // 100
    // int c = sum(a,b);
    // printf("%d\n" , c);

    // return will send vaue in c and c will print when we remove printf line in sum fun
    // try that!
    return 0;
}