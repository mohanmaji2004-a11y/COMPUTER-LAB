#include <stdio.h>

int main() {
    int num, d1, d2, sum, prod;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    if (num < 10 || num > 99) {
        printf("Not a two-digit number!\n");
        return 0;
    }

    d1 = num / 10;
    d2 = num % 10;

    sum = d1 + d2;
    prod = d1 * d2;

    printf("Sum of digits = %d\n", sum);
    printf("Product of digits = %d\n", prod);
    printf("Sum + Product = %d\n", sum + prod);

    if (sum + prod == num) {
        printf("%d is a special two-digit number\n", num);
    } else {
        printf("%d is not a special two-digit number\n", num);
    }

    return 0;
}
