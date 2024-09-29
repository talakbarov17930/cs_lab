#include <stdio.h>

int main() {
    int n;
    float sum = 0, num;

    scanf("%d", &n);           
    while (n--) {              
        scanf("%f", &num);
        sum += num;
    }

    printf("%.1f\n", sum);     
    return 0;
}