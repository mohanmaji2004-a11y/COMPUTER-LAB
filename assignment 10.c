#include <stdio.h>

int main() {
    int a = 20, b = 15;

    a = a + b;   // sum of a and b stored in a
    b = a - b;   // original a is assigned to b
    a = a - b;   // original b is assigned to a

    printf("The swapped numbers are: a = %d, b = %d\n", a, b);

    return 0;
}