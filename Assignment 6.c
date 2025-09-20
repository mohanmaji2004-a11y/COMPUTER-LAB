#include <stdio.h>

int main() {
    int p, n, t;
    float si;

    printf("Enter the principle amount: ");
    scanf("%d", &p);

    printf("Enter the rate of interest: ");
    scanf("%d", &n);

    printf("Enter the time: ");
    scanf("%d", &t);

    si = (p * n * t) / 100.0;

    printf("The interest is: %f\n", si);

    return 0;
}