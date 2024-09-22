#include <stdio.h>

#include <math.h>  // For the square root function

// Function to check if the basketball can fit into the box

int canFit(double width, double length, double height, double radius) {

    double topDiagonal = sqrt(width * width + length * length);  // Calculate the diagonal of the box's top

    double ballDiameter = 2 * radius;  // Calculate the diameter of the basketball

    // Check if the basketball can fit through the top and if the height of the box is enough

    if (ballDiameter <= topDiagonal && ballDiameter <= height) {

        return 1;  // Yes, it fits

    } else {

        return 0;  // No, it doesn't fit

    }

}

int main() {

    double width, length, height, radius;

    // Ask for the dimensions of the box and the basketball's radius

    printf("Enter the width, length, and height of the gift box: ");

    scanf("%lf %lf %lf", &width, &length, &height);
    

    printf("Enter the radius of the basketball: ");

    scanf("%lf", &radius);

    // Check if the ball fits and give an appropriate message

    if (canFit(width, length, height, radius)) {

        printf("Yes, the basketball fits in the box!\n");

    } else {

        printf("No, the basketball won't fit in the box.\n");

    }

    return 0;

}
