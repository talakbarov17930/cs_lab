#include <stdio.h>

int main() {
    double x, y;

    // Prompt user for input
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    // Determine the value of y based on the given conditions
   
    if (x > 0) {
     
        y = x * x - 2 * x + 3;  // x^2 - 2x + 3
    
        } else if (x == 0) {
      
        y = x - 5;  // x - 5
   
    } else {
        y = x * x + 2 * x - 3;  // x^2 + 2x - 3
    }

    // Display the result
    printf("The value of y is: %.2lf\n", y);

    return 0;
}