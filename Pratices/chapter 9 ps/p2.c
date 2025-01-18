#include <stdio.h>
#include <math.h>

// Create a structure for two-dimensional vectors
struct Vector2D {
    int i; // x-coordinate
    int j; // y-coordinate
};

// Function to add two vectors
struct Vector2D addVectors(struct Vector2D v1, struct Vector2D v2) {
    struct Vector2D v3 = {(v1.i + v2.i) , (v1.j + v2.j)};
    return v3;
}



int main() {
    // Initialize two vectors
    struct Vector2D v1 = {3, 4};
    struct Vector2D v2 = {1, 2};
    struct Vector2D v3 = addVectors(v1,v2);
    printf("Value: %d  %d\n" , v3.i , v3.j);

    return 0;
}
