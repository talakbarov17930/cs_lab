#include <stdio.h>

int main() {
    int n, sum = 0;
    long long product = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 3 * i - 1;
        product *= 3 * i - 1;
    }

    printf("Sum: %d\n", sum);
    printf("Product: %lld\n", product);

    return 0;
}