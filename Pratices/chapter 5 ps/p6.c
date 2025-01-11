#include <stdio.h>

int sum(int);
int sum(int x){
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else{
        return x + sum(x-1);
    }
    
}

int main(){
    int n = 10; // take user input here
    printf("Value is: %d" , sum(n));
    return 0;
}