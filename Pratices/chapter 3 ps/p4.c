#include <stdio.h>

int main(){
    int year;
    printf("Enter Year: ");
    scanf("%d", &year);

    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        printf("Year is Leap Year: %d\n" , year);
    }
    else{
        printf("Year is not laep year: %d" , year);
    }
    return 0;
}