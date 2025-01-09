#include <stdio.h>

int main(){
    int input;
    printf("Enter Your Percentage: ");
    scanf("%d",&input);

    if(input>=90){
        printf("A");
    }
    else if (input>=80 && input<90){
        printf("B");
    }
    else if (input>=70 && input<80){
        printf("C");
    }
    else if (input>=60 && input<70){
        printf("D");
    }
    else if (input>=50 && input<60){
        printf("E");
    }
    else if (input<50){
        printf("F");
    }
    return 0;
}