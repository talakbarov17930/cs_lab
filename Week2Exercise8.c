#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the position of the Fibonacci number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Fibonacci number: 0\n");
        return 0;
    } else if (n == 1) {
        printf("Fibonacci number: 1\n");
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        next = first + second;  
        first = second;         
        second = next;          
    }

    printf("Fibonacci number: %d\n", next);
    return 0;
}
