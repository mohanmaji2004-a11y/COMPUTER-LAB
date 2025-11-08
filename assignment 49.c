#include <stdio.h>

// Function to calculate sum of first n even natural numbers
int sumEvenNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 2 * i; // Even numbers are 2, 4, 6, ...
    }
    return sum;
}

int main() {
    int n = 10; // First 10 even natural numbers
    int result = sumEvenNumbers(n);
    printf("Sum of first %d even natural numbers = %d\n", n, result);
    return 0;
}
