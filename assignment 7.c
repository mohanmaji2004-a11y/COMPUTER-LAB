#include <stdio.h>

int main() {
    float r, ar;

    printf("Enter the radius: ");
    scanf("%f", &r);

    ar = 3.14 * r * r;

    printf("The area of the circle is: %.2f\n", ar);

    return 0;
}