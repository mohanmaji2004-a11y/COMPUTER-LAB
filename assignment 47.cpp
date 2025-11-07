#include <stdio.h>

int main() {
    int n, reverse = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int sign = (n < 0) ? -1 : 1;

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    reverse = reverse * sign;

    printf("Reversed number: %d\n", reverse);

    return 0;
}

