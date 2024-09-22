#include <stdio.h>

int main() {
    int num;

    // Prompt user for input
   
    printf("Enter an integer: ");
   
    scanf("%d", &num);

    // Check divisibility and print appropriate message
   
    if (num % 6 == 0) {
   
        printf("Excellent\n");
   
    } else if (num % 2 == 0 || num % 3 == 0) {
   
        printf("OK\n");
   
    } else {
   
        printf("Noo\n");
   
    }

    return 0;
}
