#include <stdio.h>

int main(){
    int i = 1;
    int a = 1;
    // print happy birthday 100 time
    while (i<=100)
    {
        printf("%d. Happy Birthday!\n" , a);
        a+=1;
        i+=1;
    }
    
    return 0;
}