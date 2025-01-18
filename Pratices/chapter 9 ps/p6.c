#include <stdio.h>

struct complex {
    int i;
    int j;
    int k;
    int l;
    int m;
};

void display(struct complex v) {
    printf("complex: %d i %d j %d k %d l %d m\n", v.i, v.j, v.k, v.l, v.m);
}

int main() {
    struct complex v;
    
    // Take input from the user for each member of the structure
    printf("Enter value for i: ");
    scanf("%d", &v.i);
    printf("Enter value for j: ");
    scanf("%d", &v.j);
    printf("Enter value for k: ");
    scanf("%d", &v.k);
    printf("Enter value for l: ");
    scanf("%d", &v.l);
    printf("Enter value for m: ");
    scanf("%d", &v.m);

    // Print the values of the structure members
    // printf("complex: %d i %d j %d k %d l %d m\n", v.i, v.j, v.k, v.l, v.m);
    display(v);

    return 0;
}
