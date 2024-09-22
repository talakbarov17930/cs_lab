#include <stdio.h>

// Function to find the maximum of four integers

int max(int t1, int t2, int t3, int t4) {

    int maxTime = t1;  // Assume t1 is the maximum initially
    
    if (t2 > maxTime)

        maxTime = t2;

    if (t3 > maxTime)

        maxTime = t3;

    if (t4 > maxTime)

        maxTime = t4;
    
    return maxTime;

}

int main() {

    int t1, t2, t3, t4;
    
    // Input the duration of each task

    printf("Enter the duration of the four tasks (t1 t2 t3 t4): ");

    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);
    
    // Calculate the total time required to complete all jobs

    int totalTime = max(t1, t2, t3, t4);
    
    // Output the result

    printf("The total time required to complete all jobs is: %d\n", totalTime);
    
    return 0;

}
