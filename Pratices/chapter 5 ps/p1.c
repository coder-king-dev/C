#include <stdio.h>

int avarage(int,int,int);
int avarage(int x,int y,int z){
    int avarage = (x+y+z)/3;
    return avarage;
}


int main(){
    int a = 3; int b = 6; int c = 9; //  take user input here
    int t = avarage(a,b,c);
    printf("avarage is: %d\n" , t);
    return 0;
}