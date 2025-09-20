#include <stdio.h>
#include <math.h>

int main() {
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    double floorValue = floor(num);
    double ceilValue = ceil(num);

    printf("Number = %.2lf\n", num);
    printf("Floor value = %.2lf\n", floorValue);
    printf("Ceil value = %.2lf\n", ceilValue);

    return 0;
}