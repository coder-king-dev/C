#include <stdio.h>

int main(){
    // program for print number 5 in 1000 without break statements
    for (int i = 1; i <= 1000; i++)
    {
        if (i>5)
        {
            continue;
        }
        printf("Value of i: %d\n" , i);
        
    }
    /*
        output will : 
            Value of i: 1
            Value of i: 2
            Value of i: 3
            Value of i: 4
            Value of i: 5
        Done
    */
    
    return 0;
}