#include <stdio.h>

int main() {
    int n, original, reverse = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original < 0) {
        if (-reverse == original) {
            printf("%d is a palindrome\n", original);
        } else {
            printf("%d is not a palindrome\n", original);
        }
    } else {
        if (reverse == original) {
            printf("%d is a palindrome\n", original);
        } else {
            printf("%d is not a palindrome\n", original);
        }
    }

    return 0;
}

