#include <stdio.h>

int main() {
    double x0, y0, radius, x, y;

    
    printf("Enter circle center (x0, y0) and radius: ");
    scanf("%lf %lf %lf", &x0, &y0, &radius);

    printf("Enter point coordinates (x, y), Ctrl+D to end:\n");

    
    while (scanf("%lf %lf", &x, &y) != EOF) {
        double dist_squared = (x - x0) * (x - x0) + (y - y0) * (y - y0);  
        double radius_squared = radius * radius;  

       
        if (dist_squared < radius_squared)
            printf("Point (%.2f, %.2f) is INSIDE the circle\n", x, y);
        else if (dist_squared == radius_squared)
            printf("Point (%.2f, %.2f) is ON the circle\n", x, y);
        else
            printf("Point (%.2f, %.2f) is OUTSIDE the circle\n", x, y);
    }

    return 0;
}
