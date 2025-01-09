#include <stdio.h>

int main(){
    float value;
    printf("Enter Your Value: ");
    scanf("%f" , &value);


    if(value<=250000){
        printf("No GTX!");
    }

    else if (value>250000 && value<=500000)
    {
        // float rate1 = 5;
        float cla1 = value*0.05;
        printf("You will give: %f\n" , cla1);
    }

    else if (value>500000 && value<=1000000)
    {
        // float rate1 = 5;
        float cla2 = value*0.2;
        printf("You will give: %f\n" , cla2);
    }

    else if (value>1000000)
    {
        // float rate1 = 5;
        float cla3 = value*0.3;
        printf("You will give: %f\n" , cla3);
    }

    else{
        printf("no");
    }
    
    return 0;
}