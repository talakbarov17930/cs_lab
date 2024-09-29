#include <stdio.h>

int main() {
    int a, b, k, sum = 0;

    printf(" Enter range ( a and b ): ");
    scanf("%d %d", &a, &b);
    printf(" Enter range ( k ): ");
    scanf("%d" , &k);

    for (int i = a; i <= b; i++) {
        if (i % k == 0) {
            sum += i;
        }

    for( int i = b; i <= a; i++ )
       if (i % k == 0) {
            sum += i;
        }

    }

    printf("Sum: %d\n", sum);
    return 0;
}





