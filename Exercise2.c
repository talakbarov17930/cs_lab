#include <stdio.h>

int main() {
    int num;

    // Prompt user for input
   
    printf("Enter an integer: ");
   
    scanf("%d", &num);

    // Check is the number is odd or even
   
    if (num % 2 == 0) {
    
        printf("%d is an even number.\n", num);
   
    } else {
      
        printf("%d is an odd number.\n", num);
   
    }

    return 0;
}
