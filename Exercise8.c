#include <stdio.h>

// Function to check if three sticks can form a triangle

int canFormTriangle(int a, int b, int c) {

    // Check the triangle inequality conditions

    if (a + b > c && a + c > b && b + c > a) {

        return 1;  // Yes, they can form a triangle

    } else {

        return 0;  // No, they cannot form a triangle

    }
}

int main() {

    int a, b, c;
    
    // Input the lengths of the three sticks

    printf("Enter the lengths of the three sticks: ");

    scanf("%d %d %d", &a, &b, &c);
    
    // Determine if the sticks can form a triangle

    if (canFormTriangle(a, b, c)) {

        printf("Yes, the sticks can form a triangle.\n");

    } else {

        printf("No, the sticks cannot form a triangle.\n");

    }
    
    return 0;

}
