#include <stdio.h>

#include <stdlib.h>  // For abs() function

// Function to get the maximum of two integers

int max(int a, int b) {

    return (a > b) ? a : b;

}

int main() {

    int number, digit1, digit2, digit3;
    
    // Input the three-digit number

    printf("Enter a three-digit number: ");

    scanf("%d", &number);
    
    // Take the absolute value to handle negative numbers

    number = abs(number);
    
    // Extract the digits from the number

    digit1 = number / 100;          // Hundreds place

    digit2 = (number / 10) % 10;    // Tens place

    digit3 = number % 10;           // Ones place
    
    // Compute all possible products

    int product1 = digit1;                  // Just digit1

    int product2 = digit2;                  // Just digit2

    int product3 = digit3;                  // Just digit3

    int product12 = digit1 * digit2;        // Multiply digit1 and digit2

    int product13 = digit1 * digit3;        // Multiply digit1 and digit3

    int product23 = digit2 * digit3;        // Multiply digit2 and digit3

    int product123 = digit1 * digit2 * digit3;  // Multiply all three digits

    // Find the maximum product

    int maxProduct = max(product1, product2);

    maxProduct = max(maxProduct, product3);

    maxProduct = max(maxProduct, product12);

    maxProduct = max(maxProduct, product13);

    maxProduct = max(maxProduct, product23);

    maxProduct = max(maxProduct, product123);
    
    // Output the result

    printf("The maximum product is: %d\n", maxProduct);
    
    return 0;

}
