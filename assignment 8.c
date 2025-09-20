#include <stdio.h>

int main() {
    float c1, c2, f1, f2;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &f1);

    c1 = (f1 - 32) * 5 / 9;
    printf("The Celsius temperature is: %.2f\n", c1);

    printf("Enter Celsius temperature: ");
    scanf("%f", &c2);

    f2 = (c2 * 9 / 5) + 32;
    printf("The Fahrenheit temperature is: %.2f\n", f2);

    return 0;
}