#include <stdio.h>

int main(){
    int a;
    printf("Enter number: ");
    scanf("%d",&a);

    switch(a){
        case 1:
            printf("Case 1");
            break;//for break otherwise all will print
        case 2:
            printf("Case 2");
            break;//for break otherwise all will print
        case 3:
            printf("Case 3");
            break;//for break otherwise all will print
        case 4:
            printf("Case 4");
            break;//for break otherwise all will print
        default:
            printf("Defoult case");
    }
    return 0;
}