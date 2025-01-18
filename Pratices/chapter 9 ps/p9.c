#include <stdio.h>

struct date
{
    int dd;
    int mm;
    int yyyy;
};

int compare(struct date d1 , struct date d2){
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }
    else if (d1.yyyy>d2.yyyy)
    {
        return 1;
    }
    else{
        return -1;
    }
    
    
}

int main(){
    // you can try diff dates
    struct date d1 = {12,4,2012};
    struct date d2 = {12,4,2012};
    printf("%d" , compare(d1,d2));
    return 0;
}