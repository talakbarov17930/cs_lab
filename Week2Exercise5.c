#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    
    while (number != 0) {
        int digit = number % 10;  
        if (digit % 2 == 0)       
            sum += digit;
        number /= 10;            
    }

    printf("Sum of even digits: %d\n", sum);
    return 0;
}
