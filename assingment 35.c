#include <stdio.h>
int main() {
    int lower, upper, i, j, isPrime;
    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);
    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for (i = lower; i <= upper; i++) {
        if (i < 2)
            continue; 

        isPrime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}

