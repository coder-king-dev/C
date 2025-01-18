#include <stdio.h>
#include <string.h>

typedef struct acc{
    int account_num;
    char name[35];
    int amount;
}account;
// i will use 3

int main(){
    account acc1;
    acc1.account_num = 34343434;
    acc1.amount = 200000;
    strcpy(acc1.name , "xyz@ybl.com");
    printf("account num: %d , amount : %d , name: %s\n" , acc1.account_num , acc1.amount , acc1.name);
    return 0;
}