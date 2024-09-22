#include <stdio.h>

int main() {
   
    int num, digit1, digit2, digit3, greatest, smallest;

    printf("Enter a three-digit number: ");
   
    scanf("%d", &num);

    if (num < 0) {
   
        num = -num;
   
    }

    digit1 = num / 100;
   
    digit2 = (num / 10) % 10;
   
    digit3 = num % 10;

    greatest = digit1;
   
    smallest = digit1;

    if (digit2 > greatest) {
   
        greatest = digit2;
   
    }
   
    if (digit3 > greatest) {
   
        greatest = digit3;
   
    }

    if (digit2 < smallest) {
   
        smallest = digit2;
   
    }
   
    if (digit3 < smallest) {
   
        smallest = digit3;
    }

    printf("Greatest digit: %d\n", greatest);
   
    printf("Smallest digit: %d\n", smallest);

    return 0;
}