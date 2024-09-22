#include <stdio.h>

#include <math.h> // for sqrt() function

int main() {
  
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    // Prompt user for input
  
    printf("Enter coefficients a, b, and c: ");
  
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
  
    discriminant = b * b - 4 * a * c;

    // Check the discriminant and determine the number of roots
  
    if (discriminant > 0)

     // Two distinct real roots
      
        root1 = (-b + sqrt(discriminant)) / (2 * a);
      
        root2 = (-b - sqrt(discriminant)) / (2 * a);
      
        printf("Two distinct real roots: %.2lf and %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
    
        // One real root (repeated)
    
        root1 = root2 = -b / (2 * a);
    
        printf("One real root (repeated): %.2lf\n", root1);
    
    } 
    else {
    
        // No real roots, calculate imaginary parts
    
        realPart = -b / (2 * a);
    
        imaginaryPart = sqrt(-discriminant) / (2 * a);
    
        printf("No real roots. Complex roots are: %.2lf + %.2lfi and %.2lf - %.2lfi\n",
    
               realPart, imaginaryPart, realPart, imaginaryPart);
    }
               return 0;
    
    



