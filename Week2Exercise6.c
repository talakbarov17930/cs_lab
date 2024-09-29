#include <stdio.h>

int main() {
    int number, digit, result = 0, place = 1;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10; 
        if (digit != 0) {
            result += digit * place;  
            place *= 10;              
        }
        number /= 10;  
    }

    printf("Result: %d\n", result);
    return 0;
}
