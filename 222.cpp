#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Division by zero is not allowed.\n");
    } else {
        int quotient = a / b;              
        int remainder = a - (quotient * b); // remainder formula
        printf("Remainder = %d\n", remainder);
    }

    return 0;
}

