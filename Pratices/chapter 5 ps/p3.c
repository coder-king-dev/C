#include <stdio.h>

#define G 9.8  // acceleration due to gravity in m/s^2

// Function to calculate force
double calculate_force(double mass) {
    return mass * G;  // F = m * g
}

int main() {
    double mass, force;
    
    // Input the mass of the body
    printf("Enter the mass of the body (in kg): ");
    scanf("%lf", &mass);
    
    // Calculate the force of attraction
    force = calculate_force(mass);
    
    // Output the result
    printf("The force of attraction on a body with mass %.2f kg is %.2f N\n", mass, force);
    
    return 0;
}
