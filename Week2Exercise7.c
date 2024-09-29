#include <stdio.h>

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    
    int length = 0;
    while (number > 1) {
        printf("%d ", number);
        number = (number % 2 == 0) ? number / 2 : 3 * number + 1;
        length++;
    }

    /
    printf("1\nLength: %d\n", length + 1);

    return 0;
}
