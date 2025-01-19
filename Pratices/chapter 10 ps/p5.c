#include <stdio.h>

int main(){
    int num;
    FILE *ptr;
    ptr = fopen("p5f.txt" , "r");


    fscanf(ptr , "%d" , &num );
    fclose(ptr);

    FILE *ptr2;
    ptr2 = fopen("p5f.txt" , "w");
    
    int doublen = num*2;
    fprintf(ptr2 , "%d" , doublen);
    
    return 0;
}